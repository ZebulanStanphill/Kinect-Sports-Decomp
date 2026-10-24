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
| Functions with matching code | 13,381 |
| Matched code | 1,184,088 / 15,705,500 (7.53932%) |
| Fully linked code | 1,178,448 / 15,705,500 (7.50341%) |
| Units with source | 52,856 |
| Fuzzy match | 43.15281% |

## Building

Place `default.xex` from your copy of the game in `orig/4D5308C9/`. Install Python 3.10+ and Ninja, then run:

```sh
python3 configure.py
ninja
```

On Linux, pass `--wrapper /path/to/wibo` to `configure.py` if Wibo is not already configured. On Windows, run `py configure.py`; the compiler runs without a wrapper. Run `python3 configure.py --help` for other tool paths.

Some units use the Visual C++ 2010 standard library headers, which can't be distributed with the project. To build them, pass `--vc-include` with the `VC/include` directory of a Visual Studio 2010 installation (for example `"C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include"`). Without it, those units use the original objects and count as unmatched.

## Contributing

Pick a function in `src/auto_match/` and compare changes with [objdiff](https://github.com/encounter/objdiff). See [CONTRIBUTING.md](CONTRIBUTING.md) for build and submission instructions.
