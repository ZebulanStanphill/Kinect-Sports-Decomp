/* Minimal C library declarations written for this project (not a vendor header): just
   what the open-source library sources in src/auto_match need. See include/libc/README.md. */
typedef unsigned int size_t;
typedef int ptrdiff_t;
#ifndef _NATIVE_WCHAR_T_DEFINED   /* a built-in type in C++ */
typedef unsigned short wchar_t;
#endif
#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif
#define offsetof(s, m) ((size_t)&(((s *)0)->m))
