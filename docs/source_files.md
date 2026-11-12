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

## Limits

Only functions with direct evidence are listed. A source file also holds functions that
use no assertion, and most of them are not listed yet. In the libraries, which were linked
from whole object files, a file's functions sit together in one address range, so the
listed functions mark out ranges that the rest of each file's functions fill. The game's own
code was built with link-time code generation, so one of its files can be spread over
several places. The table was generated from the game's executable and `symbols.txt`; rerun
the generator after functions are renamed.
