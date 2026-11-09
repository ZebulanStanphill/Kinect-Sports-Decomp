# Minimal C library declarations

Written for this project, not taken from any C library or SDK. The open-source library
code in `src/auto_match/` (see `docs/licenses/`) includes its system headers from here: the
upstream headers' `#include <stdio.h>` and similar lines point at these files instead
(`#include "../libc/stdio.h"`). They hold only basic declarations of the functions, types
and macros those sources use. `stdio.h` reaches the standard streams through `__iob_func`,
the C runtime function the game's code calls for them (its FILE records are 32 bytes).
