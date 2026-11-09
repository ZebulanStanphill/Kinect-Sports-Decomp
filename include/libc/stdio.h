/* Minimal C library declarations written for this project (not a vendor header): just
   what the open-source library sources in src/auto_match need. See include/libc/README.md. */
#include "stddef.h"
/* The game's C library keeps its streams in an array of 32-byte FILE records that
   __iob_func returns; the standard streams are its first three entries. */
typedef struct _FILE { char opaque[32]; } FILE;
FILE *__iob_func(void);
#define stdin (&__iob_func()[0])
#define stdout (&__iob_func()[1])
#define stderr (&__iob_func()[2])
#define EOF (-1)
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
FILE *fopen(const char *name, const char *mode);
FILE *fdopen(int fd, const char *mode);
int fclose(FILE *f);
size_t fread(void *buf, size_t size, size_t count, FILE *f);
size_t fwrite(const void *buf, size_t size, size_t count, FILE *f);
int fflush(FILE *f);
int ferror(FILE *f);
int fseek(FILE *f, long offset, int whence);
long ftell(FILE *f);
int getc(FILE *f);
int putc(int c, FILE *f);
int printf(const char *format, ...);
int fprintf(FILE *f, const char *format, ...);
int sprintf(char *buf, const char *format, ...);
