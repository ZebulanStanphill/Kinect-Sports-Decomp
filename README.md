# Kinect Sports Decomp

A decompilation of **Kinect Sports** for Xbox 360.

## Supported version

| | |
| --- | --- |
| Title ID | `4D5308C9` |
| Media ID | `655F2429` |
| `default.xex` SHA-256 | `46388258eddee0cff4753da6c426c99a80d05d65ee38403b65ac21e86a03cf01` |

## Progress

| Measure | Current |
| --- | ---: |
| Function ranges indexed by Jeff | 57,731 |
| Functions with Ghidra C | 57,614 |
| Functions with matching code | 24,179 |
| Matched code | 1,906,880 / 15,705,500 (12.14148%) |
| Fully linked code | 1,906,432 / 15,705,500 (12.13863%) |
| Units with source | 53,969 |
| Fuzzy match | 44.29885% |

*Matched code* counts the code of functions that compile to exactly the original instructions. *Fully linked code* counts only units in which every function matches, since only those are linked into the rebuilt game. *Fuzzy match* is objdiff's average similarity over all code, including unmatched functions.

`scripts/update_progress.sh` generates these figures from a full build that includes the [Visual C++ 2010 headers](#visual-c-2010-headers). A build without them reports slightly lower figures, because the units that need them count as unmatched.

## Building

Place `default.xex` from your copy of the game in `orig/4D5308C9/`. Install Python 3.10+ and Ninja, then run:

```sh
python3 configure.py
ninja
```

On Linux, pass `--wrapper /path/to/wibo` to `configure.py` if Wibo is not already configured. On Windows, run `py configure.py`; the compiler runs without a wrapper. Run `python3 configure.py --help` for other tool paths.

### Visual C++ 2010 headers

The game was built with the Visual C++ 2010 standard library. Its containers, such as `std::vector` and `std::map`, are templates, so their code was compiled into the game's own functions. That code depends on exactly how the library's headers are written, down to the order in which their inline helpers expand. As a result, some of these functions only match when they are compiled from the real headers. The headers are Microsoft's code, so they can't be included in this repository.

To build those units, pass `--vc-include` to `configure.py` with the `VC/include` directory of your own Visual Studio 2010 installation, for example `"C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include"`. Only the headers are used; the code is still compiled with the Xbox 360 compiler. The project has been checked against the headers from the original release of Visual Studio 2010 (`_CPPLIB_VER` 520).

Without `--vc-include`, `configure.py` prints how many units it skipped. Those units use the original objects and count as unmatched.

## Contributing

Pick a function in `src/auto_match/` and compare changes with [objdiff](https://github.com/encounter/objdiff). See [CONTRIBUTING.md](CONTRIBUTING.md) for build and submission instructions.
