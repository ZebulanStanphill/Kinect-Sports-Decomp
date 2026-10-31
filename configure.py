#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import json
import sys
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple, Union

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

from tools.ltcg_obj import probe as ltcg_probe

from tools.defines_common import (
    cflags_includes,
    DEFAULT_VERSION,
    VERSIONS
)

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
    parser.add_argument(
        "--wibo-ltcg",
        metavar="BINARY",
        type=Path,
        help="path to a wibo that can run link.exe /LTCG, for units with "
        "\"ltcg_units\" (optional; defaults to --wrapper; without one they are "
        "built without link-time code generation)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--ninja",
    metavar="BINARY",
    type=Path,
    help="path to ninja binary (optional)"
)
parser.add_argument(
    "--vc-include",
    metavar="DIR",
    type=Path,
    help="path to Visual C++ 2010's VC/include directory (optional; units that "
    "use its standard library headers are only built with it)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--warn",
    dest="warn",
    type=str,
    choices=["all", "off", "error"],
    help="how to handle warnings",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.ninja_path = args.ninja
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-1"
config.compilers_tag = "20260305"
config.dtk_tag = "v0.5.1"
config.objdiff_tag = "v3.8.1"
config.sjiswrap_tag = "v1.2.1"
config.wibo_tag = "1.0.0"

# Project
config_dir = Path("config") / config.version
config_json_path = config_dir / "config.json"
objects_path = config_dir / "objects.json"
config.config_path = config_dir / "config.yml"
config.check_sha_path = config_dir / "build.sha1"
# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = [
    config_json_path,
    objects_path,
]

# Optional numeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = None

# Build flags
flags = json.load(open(config_json_path, "r", encoding="utf-8"))
progress_categories: dict[str, str] = flags["progress_categories"]
asflags: list[str] = flags["asflags"]
ldflags: list[str] = flags["ldflags"]
cflags: dict[str, dict] = flags["cflags"]

def get_cflags(name: str) -> list[str]:
    return cflags[name]["flags"]
def add_cflags(name: str, flags: list[str]):
    cflags[name]["flags"] = [*flags, *cflags[name]["flags"]]

def get_cflags_base(name: str) -> str:
    return cflags[name].get("base", None)

def are_cflags_inherited(name: str) -> bool:
    return "inherited" in cflags[name]
def set_cflags_inherited(name: str):
    cflags[name]["inherited"] = True

def apply_base_cflags(key: str):
    if are_cflags_inherited(key):
        return

    base = get_cflags_base(key)
    if base is None:
        add_cflags(key, cflags_includes)
    else:
        apply_base_cflags(base)
        add_cflags(key, get_cflags(base))

    set_cflags_inherited(key)

# Set up base flags
base_cflags = get_cflags("base")

# Apply cflag inheritance
for key in cflags.keys():
    apply_base_cflags(key)

config.asflags = [
    *asflags,
    # f"--defsym BUILD_VERSION={version_num}",
    # f"--defsym VERSION_{config.version}",
]
config.ldflags = ldflags

# Candidate from the XEX's C1/C2 16.0.10224.0 records; matching compiler
# package and exact flags still need to be established.
config.linker_version = "X360/16.00.10224.00"

config.shift_jis = False
config.progress_all = False

# Object files
Matching = True
Equivalent = config.non_matching
NonMatching = False

config.warn_missing_config = True
config.warn_missing_source = False

def get_object_completed(status: str) -> bool:
    if status == "MISSING":
        return NonMatching
    elif status == "Matching":
        return Matching
    elif status == "NonMatching":
        return NonMatching
    elif status == "Equivalent":
        return Equivalent
    elif status == "LinkIssues":
        return NonMatching

    assert False, f"Invalid object status {status}"

# Units marked "vc_include" use Visual C++ 2010's standard library headers, which
# can't be distributed. They are built only when --vc-include points to a local
# copy; otherwise the original object is linked in their place. The defines
# stand in for the x86-only parts of malloc.h and setjmp.h, and the game was
# built without exception handling.
vc_cflags: list[str] = []
if args.vc_include is not None:
    vc_cflags = [
        "/D_HAS_EXCEPTIONS=0",
        "/D_ALLOCA_S_MARKER_SIZE=8",
        "/D_JBLEN=64",
        "/D_JBTYPE=double",
        f'"/I{args.vc_include.resolve()}"',
    ]
vc_skipped = 0

libs: list[dict] = []
objects: dict[str, dict] = json.load(open(objects_path, "r", encoding="utf-8"))
for (lib, lib_config) in objects.items():
    # config_cflags: str | list[str]
    config_cflags: list[str] = lib_config.pop("cflags")
    lib_cflags = get_cflags(config_cflags) if isinstance(config_cflags, str) else config_cflags

    lib_objects: list[Object] = []
    # config_objects: dict[str, str | dict]
    config_objects: dict[str, Union[str, dict[str, Union[str, Any]]]] = lib_config.pop("objects")
    if len(config_objects) < 1:
        continue

    for (path, obj_config) in config_objects.items():
        if isinstance(obj_config, str):
            completed = get_object_completed(obj_config)
            lib_objects.append(Object(completed, path))
        else:
            completed = get_object_completed(obj_config["status"])

            if obj_config.pop("vc_include", False):
                if vc_cflags:
                    obj_config["extra_cflags"] = [*obj_config.get("extra_cflags", []), *vc_cflags]
                else:
                    # no such file, so the unit is treated as having no source
                    completed = NonMatching
                    obj_config["source"] = f"{path}.needs-vc-include"
                    vc_skipped += 1

            if "cflags" in obj_config:
                object_cflags = obj_config["cflags"]
                if isinstance(object_cflags, str):
                    obj_config["cflags"] = get_cflags(object_cflags)

            lib_objects.append(Object(completed, path, **obj_config))

    libs.append({
        "lib": lib,
        "cflags": lib_cflags,
        "host": False,
        "objects": lib_objects,
        **lib_config
    })

config.libs = libs
if vc_skipped and args.mode == "configure":
    print(f"{vc_skipped} units need --vc-include; using their original objects")

# Units with "ltcg_units" are built with link-time code generation, together
# with the units listed (see tools/ltcg_obj.py). That needs a link.exe that
# runs /LTCG, which wibo only does with fixes not yet released, so the tools
# are tried once (the result is cached in the build directory). Without them,
# such units are built like any other and are not counted as complete.
ltcg_wrapper: Optional[Path] = None
if not is_windows():
    ltcg_wrapper = args.wibo_ltcg or args.wrapper
config.ltcg_wrapper = ltcg_wrapper


def ltcg_supported() -> Tuple[bool, str]:
    if not is_windows() and ltcg_wrapper is None:
        return False, "no --wibo-ltcg or --wrapper was given"
    tools_dir = config.compilers() / str(config.linker_version)
    cl, link = tools_dir / "cl.exe", tools_dir / "link.exe"
    for tool in (ltcg_wrapper, cl, link):
        if tool is not None and not tool.is_file():
            return False, f"{tool} does not exist yet"
    key = [f"{tool.resolve()}:{tool.stat().st_size}:{tool.stat().st_mtime_ns}"
           for tool in (ltcg_wrapper, link) if tool is not None]
    cache = config.build_dir / "ltcg_probe.json"
    try:
        cached = json.loads(cache.read_text(encoding="utf-8"))
        if cached["key"] == key:
            return cached["ok"], cached["message"]
    except (OSError, ValueError, KeyError):
        pass
    ok, message = ltcg_probe(str(ltcg_wrapper) if ltcg_wrapper else None, str(cl), str(link),
                             config.build_dir / "ltcg_probe")
    cache.parent.mkdir(parents=True, exist_ok=True)
    cache.write_text(json.dumps({"key": key, "ok": ok, "message": message}), encoding="utf-8")
    return ok, message


all_objects = {obj.name: obj for lib in libs for obj in lib["objects"]}
ltcg_objects = [obj for obj in all_objects.values() if obj.options.get("ltcg_units") is not None]
if ltcg_objects:
    ltcg_ok, ltcg_reason = ltcg_supported()
    ltcg_skipped = []
    for obj in ltcg_objects:
        for name in obj.options["ltcg_units"]:
            if name not in all_objects:
                sys.exit(f"{obj.name}: ltcg_units names {name}, which is not in {objects_path}")
            other = all_objects[name]
            if not (Path(other.options.get("src_dir") or config.src_dir) / other.options["source"]).is_file():
                ltcg_skipped.append(obj.name)
                break
        else:
            if ltcg_ok:
                continue
            ltcg_skipped.append(obj.name)
        obj.options["ltcg_units"] = None
        obj.completed = NonMatching
    if ltcg_skipped and args.mode == "configure":
        why = ltcg_reason if not ltcg_ok else "a unit they need has no source in this configuration"
        print(f"{len(ltcg_skipped)} units need link-time code generation ({why}); building them "
              "without it. Pass --wibo-ltcg with a wibo that can run link.exe /LTCG (see CONTRIBUTING.md).")

# Progress tracking categories
config.progress_categories = [ProgressCategory(name, desc) for (name, desc) in progress_categories.items()]
config.progress_each_module = args.verbose

if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress and write progress.json
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
