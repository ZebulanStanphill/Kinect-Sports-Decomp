# Third-party licences

The game contains code from open-source libraries, and this project rebuilds it from their
upstream source. These files carry the licence terms of those libraries:

| Library | Version | Licence |
| --- | --- | --- |
| IJG libjpeg | 6b | [IJG-libjpeg-6b-README](IJG-libjpeg-6b-README) (the IJG README, which its licence requires with any distributed part of the source) |
| zlib | 1.2.3 | [zlib-1.2.3-notice.txt](zlib-1.2.3-notice.txt) |
| zlib | 1.1.4 | [zlib-1.1.4-notice.txt](zlib-1.1.4-notice.txt) |
| libpng | 1.0.5 | [libpng-1.0.5-LICENSE](libpng-1.0.5-LICENSE) |

This software is based in part on the work of the Independent JPEG Group.

## The copies in the game

| Copy (span of its identified functions) | Owner (evidence) | Built with | Symbol names |
| --- | --- | --- | --- |
| libjpeg 6b, 0x827BAED0-0x827D196C | Scaleform GFx: called from the GFx image loaders at 0x826EA... | `/Ox /Os /GF` | upstream names |
| zlib 1.2.3: inflate side 0x827D1B48-0x827D4F0C, deflate side 0x82F89CA8-0x82F8DB94 | the game's only zlib 1.2.3 (its deflate calls the crc32 and adler32 of the inflate side) | `/O1 /Gy-`; `trees.c` `/O1`; `deflate.c` `/O1 /d2inlS100` (a slightly larger inline budget, which inlines `lm_init` into `deflateReset` as the game has it) | upstream names |
| libjpeg 6b, 0x829ADEA0-0x829B7834 | D3DX: called from the D3DX texture-file loader, among D3DX's other code | `/O2` | `d3dx_` + upstream name |
| zlib 1.1.4, 0x829B5140-0x829C5688 | D3DX: the zlib its libpng was built against | `/O1`, as C++ | `d3dx_` + upstream name |
| libpng 1.0.5, altered by its owner (it has checks that 1.0.5 lacks), 0x829AE0D8-0x829B98E0 | D3DX | `/O1` | upstream names |

The flags are the ones the game's code matches with. The owners are inferred from callers
and neighbouring code, not from any symbol. GFx's libjpeg was also built with `NO_GETENV`:
its `jinit_memory_mgr` does not read the `JPEGMEM` variable.

Symbol names (`config/4D5308C9/symbols.txt`) are the libraries' own names. The game has two
copies of libjpeg and two of zlib's inflate code, and one link cannot hold two functions
named `jpeg_CreateDecompress` or `inflate`. So D3DX's copies of libjpeg and zlib 1.1.4 take
the prefix `d3dx_` (`d3dx_jpeg_destroy`, `d3dx_inflate`). This naming scheme was invented
for this project; it is not from the game. The functions of these copies that libpng
calls carry the same prefix. Functions and tables that are `static` upstream keep their
upstream names even where two files of one copy use the same name (`start_pass_main`,
`emit_bits`, `extend_test`, ...). They were local to their file in the original, and
symbols.txt allows a name more than once. Data that upstream declares inside a function
has MSVC's name for it, such as `?RGB_order@?1??select_ncolors@@9@9`. Pooled constants have
MSVC's names, such as `__real@3ff0000000000000` for the double 1.0. Five C runtime
functions that the library code calls are named after those calls: `malloc`, `free`,
`exit`, `fprintf` and `__iob_func`. `sprintf` (0x82F63F40) is the statically linked C runtime's; the
import thunk of xboxkrnl.exe's own `sprintf` export has the name `xboxkrnl_sprintf`, which
was invented for this project so the two do not clash.

## How the units relate to upstream

Where the game's functions from one upstream `.c` file form one contiguous range, in
upstream order, that range is one unit, named after the upstream file in a folder for
its copy:

| Copy | Folder |
| --- | --- |
| Scaleform GFx's libjpeg 6b | `src/Scaleform/jpeg-6b/` |
| the game's zlib 1.2.3 | `src/zlib-1.2.3/` |
| D3DX's libjpeg 6b | `src/D3DX/jpeg-6b/` |
| D3DX's zlib 1.1.4 | `src/D3DX/zlib-1.1.4/` |
| D3DX's libpng 1.0.5 | `src/D3DX/libpng-1.0.5/` |

The file names are upstream's, except that D3DX's zlib files end in `.cpp`: D3DX compiled
that copy as C++, which only differs from a C compile in a few functions (`trees.c`,
`deflate.c`), and this project's build chooses the language by extension. Those units add a
prototype for each K&R definition and wrap the file in `extern "C"`, as their headers say. The folders were chosen for this project, after the
owners above; the original build paths are not known. Library functions that are not
yet part of such a unit are still single-function units in `src/auto_match/`.

Where a file's code reaches one of its static tables from another table's address
(MSVC loads the first table's address and adds the distance, with no relocation of its
own), the unit also owns those tables' `.rdata` range in `splits.txt`, as the upstream
object did: `jdhuff.c` and `jdphuff.c` (`extend_test`, `extend_offset`), `jmemmgr.c`
(`first_pool_slop`, `extra_pool_slop`), and zlib 1.2.3's `inflate.c` (`fixedtables`'
`lenfix` and `distfix`, and `inflate`'s `order`) and `inftrees.c` (`inflate_table`'s `lbase`, `lext`,
`dbase` and `dext`), and zlib 1.2.3's `trees.c` (its static trees and code tables, in `.rdata`
and `.data`). `symbols.txt` gives each of these tables its own symbol. At `/O1` the
compiler also emits a COMDAT copy of each static helper it inlined everywhere (`trees.c`'s
`bi_flush`, `gen_codes` and others); nothing calls those copies, so the linker dropped them
and the game does not have them.

Each of these units holds the upstream file as published, with only these changes:

* its include lines point at `include/<library>-<version>/`;
* functions the game lacks are under `#if 0` (the linker dropped them);
* in D3DX's copies, a short `#define` list at the top maps upstream names to the
  `d3dx_` names.

The headers under `include/<library>-<version>/` are the upstream headers. The only change
is that their system includes (`#include <stdio.h>` and the like) point at `include/libc/`.
`include/libc/` holds minimal declarations written for this project; no vendor header is
used. `include/jpeg-6b/jconfig.h` is this project's libjpeg configuration file. IJG ships
only per-platform templates, and this one is its `jconfig.vc` (Microsoft Visual C++)
template, unchanged.

The other library functions are still per-function units (`func_<address>.c`), commented
"Corresponds to libjpeg ...", "zlib 1.2.3 ..." or "libpng 1.0.5 ...". Each holds one upstream
function, or a hand-written equivalent, with only the declarations it uses, preprocessed.
Such a unit names its callees and data by the game's symbols. Helpers that the game's code
inlines may be declared `__forceinline`. These units cover the files whose game copy does
not rebuild from the unchanged upstream file. The reasons include:

* code the copy's owner altered;
* inlined helpers that the linker dropped, which a whole file would add again;
* data that the game's code reaches at an offset from a neighbouring table.
