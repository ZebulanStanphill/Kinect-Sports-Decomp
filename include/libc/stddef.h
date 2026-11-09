/* Minimal C library declarations written for this project (not a vendor header): just
   what the open-source library sources in src/auto_match need. See include/libc/README.md. */
typedef unsigned int size_t;
typedef int ptrdiff_t;
typedef unsigned short wchar_t;
#ifndef NULL
#define NULL ((void *)0)
#endif
#define offsetof(s, m) ((size_t)&(((s *)0)->m))
