"""Find a unit and its files from its name, whatever folder its source is in.

A unit is an entry of config/4D5308C9/splits.txt and objects.json. Its name is the path of
its source below src/, such as auto_match/func_82363840.c, Scaleform/jpeg-6b/jdapimin.c or
XDK/xtl/graphics/xgraphics/ucode/ssm/util/linkedlist/func_82AB4A28.c. A function's unit keeps the file name
func_<ADDRESS> when it moves to the folder of its original source file (docs/source_files.md),
so scripts take an address and ask here for the unit. The build writes the original object to
build/4D5308C9/obj/<name without extension>.obj and the compiled one to
build/4D5308C9/src/<name without extension>.obj.
"""
import json
import re
from pathlib import Path

VERSION = "4D5308C9"
NEW_UNIT_DIR = "auto_match"  # units whose original source file is not known
FUNCTION_UNIT = re.compile(r"(?:.*/)?func_[0-9A-F]{8}\.(?:c|cpp)")


def objects(root: Path) -> dict:
    """Every unit of objects.json: {name: entry}. Empty if the file does not exist."""
    path = root / f"config/{VERSION}/objects.json"
    if not path.is_file():
        return {}
    units = {}
    for library in json.loads(path.read_text(encoding="utf-8")).values():
        units.update(library.get("objects", {}))
    return units


def function_unit(root: Path, address: int):
    """Name of the unit func_<ADDRESS> in any folder, or None if the function has no unit of
    its own."""
    names = (f"func_{address:08X}.c", f"func_{address:08X}.cpp")
    for name in objects(root):
        if name.rsplit("/", 1)[-1] in names:
            return name
    return None


def containing_unit(root: Path, address: int, skip_function_units: bool = False):
    """Name of the unit whose .text range contains the address, or None. With
    skip_function_units, only units that hold several functions are considered: a source
    file grouped under its address (file_<ADDRESS>) or under its original name."""
    path = root / f"config/{VERSION}/splits.txt"
    if not path.is_file():
        return None
    text = path.read_text(encoding="utf-8")
    for match in re.finditer(r"(?m)^(\S+\.(?:c|cpp)):\n((?:\t.*\n)+)", text):
        if skip_function_units and FUNCTION_UNIT.fullmatch(match.group(1)):
            continue
        rng = re.search(r"\.text\s+start:0x([0-9A-Fa-f]+)\s+end:0x([0-9A-Fa-f]+)", match.group(2))
        if rng and int(rng.group(1), 16) <= address < int(rng.group(2), 16):
            return match.group(1)
    return None


def original_object(root: Path, name: str) -> Path:
    return root / f"build/{VERSION}/obj" / (name.rsplit(".", 1)[0] + ".obj")


def compiled_object(root: Path, name: str) -> Path:
    return root / f"build/{VERSION}/src" / (name.rsplit(".", 1)[0] + ".obj")


def source(root: Path, name: str) -> Path:
    return root / "src" / name
