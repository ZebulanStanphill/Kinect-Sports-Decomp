# Third-party licences

Some functions in `src/auto_match/` are compiled from open-source libraries that the
game contains. Their units say so in a leading comment ("Corresponds to libjpeg 6b ...",
"zlib 1.2.3 ...", "libpng 1.0.5 ..."). These files carry the licence terms of those
libraries:

| Library | Version | Licence |
| --- | --- | --- |
| IJG libjpeg | 6b | [IJG-libjpeg-6b-README](IJG-libjpeg-6b-README) (the IJG README, which its licence requires with any distributed part of the source) |
| zlib | 1.2.3 | [zlib-1.2.3-notice.txt](zlib-1.2.3-notice.txt) |
| zlib | 1.1.4 | [zlib-1.1.4-notice.txt](zlib-1.1.4-notice.txt) |
| libpng | 1.0.5 | [libpng-1.0.5-LICENSE](libpng-1.0.5-LICENSE) |

These units are altered versions of the upstream files. Each holds one upstream function,
or a hand-written equivalent, with only the declarations it uses, preprocessed, and with its
callees and data renamed to this project's address-based symbols (`fn_<addr>`, `lbl_<addr>`)
so that it compiles to the game's code. Helpers that the game's code inlines may be
declared `__forceinline`.

This software is based in part on the work of the Independent JPEG Group.
