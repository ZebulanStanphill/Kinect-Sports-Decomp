/* Minimal C library declarations written for this project (not a vendor header): just
   what the open-source library sources in src/auto_match need. See include/libc/README.md. */
#include "stddef.h"
void *malloc(size_t size);
void *calloc(size_t count, size_t size);
void *realloc(void *block, size_t size);
void free(void *block);
__declspec(noreturn) void exit(int status);
__declspec(noreturn) void abort(void);
char *getenv(const char *name);
int abs(int x);
long labs(long x);
