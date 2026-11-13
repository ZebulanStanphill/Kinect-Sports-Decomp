# Original source files

[`source_files.tsv`](source_files.tsv) lists the functions whose original source file is
known, one row per function. Its columns are the function's address, its symbol name, the
unit that holds it now, the original file, and the evidence.

## Evidence

| `evidence` | Meaning |
| --- | --- |
| `assert` | The function refers to a string that holds the file's path, which the compiler stored for an assertion or error message (`__FILE__`). The path is copied exactly as the game has it. |
| `upstream` | The function is an exact twin of a function of an open-source library's upstream file: the same instructions, with only relocation targets differing (`km/libmatch.py identify`). The file is given as the folder this project uses for that copy of the library, followed by the upstream file name (see [licenses/README.md](licenses/README.md)). |
| `upstream-ambiguous` | As `upstream`, but the function is a twin of functions in more than one upstream file (small functions that compile to the same code). All candidates are listed, separated by ` \| `. |

The `assert` paths fall into four groups:

| Paths | Code |
| --- | --- |
| `e:\xenon\xdk-main-jul10\core\private\...` | Microsoft's XDK, mostly the shader compiler and state code of `xgraphics` |
| `D:\Work\R1SDK\Olympus_testing\...` | Rare's SDK, such as its Wwise audio layer (`r1sdk\sdk\soundscape\src\Wwise\`) and network library |
| `D:\Work\Incubation\Olympus_Testing\Incubation\game\...` | the game's own code |
| relative paths such as `.\World\hkpWorld.cpp` | Havok (the `hk` files) and a network library (`NetObj.cpp`, `LogUploader.cpp`, ...) built from their own folders |

## Layout

A unit whose original file is known well enough lives in a folder named after that file
(see "Where the source is" in [CONTRIBUTING.md](../CONTRIBUTING.md)).
[`source_layout.tsv`](source_layout.tsv) lists every unit placed this way, one row per unit:
the unit, the original file, the evidence and its confidence. It holds more functions than
`source_files.tsv`, because it also takes inferences from the order in which the code was
linked.

| `confidence` | `evidence` | Meaning |
| --- | --- | --- |
| `direct` | `assert`, `upstream` | As in the table above. |
| `strong` | `between-anchors` | The function lies between two functions with direct evidence for one file, with no other file's function between them, in code that was linked from whole object files (the XDK, Havok and the open-source libraries), where a file's functions are contiguous. |
| `strong` | `assert-ltcg` | An `assert` path in the game's own code. That code was built with link-time code generation, so the path can belong to a function that was inlined into this one. |
| `strong` | `havok-typeinfo`, `havok-typeinfo-init`, `havok-getvtable` | A function of the reflection object that Havok generates for a class (`<header>Class.cpp`): the class's `hkTypeInfo` record points at it, or it returns exactly the class's vtable. |

Weaker inferences (`probable`, `possible`), such as a Havok class's other members, are not
used: those units stay in `src/auto_match/` until better evidence turns up.

The folder is the original path with its build root replaced:

| Original path | Folder under `src/` |
| --- | --- |
| `e:\xenon\xdk-main-jul10\core\private\xtl\...\file.cpp` | `XDK/xtl/.../file/` |
| `D:\Work\R1SDK\Olympus_testing\...\file.cpp` | `R1SDK/.../file/` |
| `D:\Work\Incubation\Olympus_Testing\Incubation\game\...\file.cpp` | `game/.../file/` |
| Havok's relative paths, such as `.\World\hkpWorld.cpp` | `Havok/<product>/.../file/`, such as `Havok/Physics/Dynamics/World/hkpWorld/`. The product is the one whose tree has the header at that relative path in the published Havok 6.6.0 SDK. The game has Havok 7.0.0, so a directory may differ. |
| the network library's relative paths, such as `.\NetObj.cpp` | `R1SDK/NetworkLibrary/NetworkLibrary/file/`: these files are linked directly before the ones whose paths begin `D:\Work\R1SDK\Olympus_testing\NetworkLibrary\NetworkLibrary\`; their subfolder in it is not known |
| `.\LogWriter.cpp`, `.\LogUploadManager.cpp`, `.\LogUploader.cpp` | `LogUploader/file/`: no string names their directory |
| an open-source library's file | the folder of that copy of the library, such as `Scaleform/jpeg-6b/file/` |

Folder names keep the spelling of the path in the game, which is lower case for the XDK.

A folder holds per-function units until the whole file is known. That needs every function
between the file's first and last one to be placed and matching, and the file's edges to be
known; only Havok's reflection objects have edges that the code shows. The folder's units are
then merged into one unit named after the file, beside the folder (`jcparam/` becomes
`jcparam.c`), and one row for that unit replaces their rows in `source_layout.tsv`.

## Limits

Only functions with direct evidence are listed. A source file also holds functions that
use no assertion, and most of them are not listed yet. In the libraries, which were linked
from whole object files, a file's functions sit together in one address range, so the
listed functions mark out ranges that the rest of each file's functions fill. The game's own
code was built with link-time code generation, so one of its files can be spread over
several places. The table was generated from the game's executable and `symbols.txt`; rerun
the generator (`python3 scripts/source_files.py`) after functions are renamed or units are
moved, since its `unit` column holds each unit's path.
