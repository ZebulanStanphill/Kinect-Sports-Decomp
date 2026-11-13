# Credits

This project builds on other people's work. Everything below is credited whether or not its
licence requires it, including public-domain (CC0) material. Add an entry here whenever a
new tool, library, project or data source is used.

## Project

- [SebaaMG/Kinect-Sports-Decomp](https://github.com/SebaaMG/Kinect-Sports-Decomp): the
  original project this repository continues.

## Build and analysis tools

| Tool | Author | Use |
| --- | --- | --- |
| [Jeff](https://github.com/rjkiv/jeff) and [jeff-template](https://github.com/rjkiv/jeff-template) | rjkiv | function boundaries, the split and the project template (`tools/`, `configure.py`) |
| [decomp-toolkit](https://github.com/encounter/decomp-toolkit) | encounter | ELF/COFF splitting and build support |
| [objdiff](https://github.com/encounter/objdiff) | encounter | comparing compiled code with the original |
| [sjiswrap](https://github.com/encounter/sjiswrap) | encounter | compiler wrapper the build downloads |
| [Wibo](https://github.com/decompals/wibo) | decompals | running the Windows compiler and linker on Linux and macOS |
| [Ghidra](https://github.com/NationalSecurityAgency/ghidra) | NSA | disassembly and decompilation used as a starting point for sources |

## Libraries rebuilt from upstream source

The game contains copies of these open-source libraries, which this project rebuilds from
their published source. Their licences and the details of each copy are in
[licenses/README.md](licenses/README.md).

- IJG libjpeg 6b, by the Independent JPEG Group (Thomas G. Lane and others).
- zlib 1.1.4 and 1.2.3, by Jean-loup Gailly and Mark Adler.
- libpng 1.0.5, by Guy Eric Schalnat, Andreas Dilger, Glenn Randers-Pehrson and others.

## Research and reference material

These were read or tested while working out how the game was built. No code from them is
in this repository unless stated.

- [sigmaco/havok-v6.6.0r1-b2009.07.04](https://github.com/sigmaco/havok-v6.6.0r1-b2009.07.04),
  a mirror of Havok's 6.6.0 SDK release: only its list of file paths was read, to name the
  product and class folders under `src/Havok/` ([source_files.md](source_files.md)). Havok
  is the work of Havok (now part of Microsoft).
- [xdzleo/xenon-jumptables](https://github.com/xdzleo/xenon-jumptables): Xbox 360 MSVC
  jump-table idioms, used when recovering switch statements
  ([decompiler-research.md](decompiler-research.md)).
- [tomcl7/ghidra-fidb-xenonsdk](https://github.com/tomcl7/ghidra-fidb-xenonsdk) and
  [tomcl7/x360-fidb-generator](https://github.com/tomcl7/x360-fidb-generator): Ghidra
  Function ID databases for XDK releases, tested for naming library functions.
- [freeqaz/ghidra-xenon-extension](https://github.com/freeqaz/ghidra-xenon-extension) and
  [freeqaz/ghidra](https://github.com/freeqaz/ghidra): Ghidra support for Xbox 360 code.
- [freeqaz/dc3-decomp](https://github.com/freeqaz/dc3-decomp) (Dance Central 3): its
  Ghidra tooling notes were read during early decompiler research
  ([decompiler-research.md](decompiler-research.md)). The Dance Central 3 project asks
  AI agents not to use it, so nothing else from it is used here.

Microsoft's Xbox 360 compiler, linker and Visual C++ 2010 headers are needed to build this
project but are not part of it; contributors use their own copies.
