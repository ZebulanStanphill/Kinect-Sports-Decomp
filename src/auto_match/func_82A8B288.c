typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned char fn_82A8B1E8(void *, unsigned int *, unsigned int *, unsigned int *);
extern int LDIDecompress(void *, unsigned char *, unsigned int, unsigned char *, unsigned int *);
extern int LDIResetDecompression(void *);

typedef struct Stream_82A8B288 Stream_82A8B288;
typedef struct StreamVtbl_82A8B288 {
  void *s0;
  unsigned char (*fill)(Stream_82A8B288 *);
  void *s2;
  void (*skip)(Stream_82A8B288 *, unsigned int);
  unsigned char (*read)(Stream_82A8B288 *, unsigned char *, unsigned int, void *);
} StreamVtbl_82A8B288;
struct Stream_82A8B288 {
  StreamVtbl_82A8B288 *vtbl;
};
typedef struct Dec_82A8B288 {
  char pad0[4];
  Stream_82A8B288 *stream;
  unsigned char *buf;
  void *ctx;
  unsigned int pos;
  unsigned int cnt;
  unsigned int base;
  unsigned int size;
} Dec_82A8B288;

int fn_82A8B288(Dec_82A8B288 *d)
{
  unsigned int *psize = &d->size;

  if (d->size > 0) {
    if (d->pos >= d->base && d->pos < d->base + 0x8000) return 1;
  }
  {
    unsigned int *pbase = &d->base;
    if (d->pos < d->base) {
      if (d->stream->vtbl->fill(d->stream) == 0) return 0;
      *psize = 0;
      *pbase = 0;
      d->cnt = 0;
    }
    {
      unsigned int *pcnt = &d->cnt;
      Stream_82A8B288 *st;
      unsigned int n;
      struct { unsigned int out; unsigned int tmp; } l;

      while (1) {
        if (fn_82A8B1E8(d->stream, pcnt, pbase, psize) == 0) return 0;
        n = *pcnt;
        if (n > 0x9800) return 0;
        if (*psize > 0x8000) return 0;
        if (*pbase + 0x8000 >= d->pos) { st = d->stream; break; }
        st = d->stream;
        st->vtbl->skip(st, n);
      }
      if (st->vtbl->read(st, d->buf + 0x8000, n, &l.tmp) != 0) {
        l.out = *psize;
        if (LDIDecompress(d->ctx, d->buf + 0x8000, *pcnt, d->buf, &l.out) == 0) {
          return LDIResetDecompression(d->ctx) == 0;
        }
      }
    }
  }
  return 0;
}
