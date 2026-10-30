typedef struct {
  int c50;
  int c54;
  int c58;
  int c5c;
  __int64 c60;
} Loc_82C3CE78;
struct St_82C3CE78;
typedef int (*Cb_82C3CE78)(void *ctx, void *buf, void *len, int *a, __int64 *b, int *c, int *d, int *e);
typedef struct St_82C3CE78 {
  Cb_82C3CE78 cb;
  void *ctx;
  int pad8;
  unsigned total;
  unsigned avail;
  unsigned char *ptr;
  char pad18[0x30];
  __int64 f48;
  int pad50[1];
  int f54;
  unsigned short f58;
  char pad5a[0x16];
  int f70;
  unsigned char buf[1];
} St_82C3CE78;
typedef struct { char pad[0x20]; int st; } Obj_82C3CE78;
extern void *memcpy(void *, const void *, unsigned);

int fn_82C3CE78(Obj_82C3CE78 *o, unsigned off, unsigned *outp, int unused, unsigned *outn, unsigned *outf)
{
  Loc_82C3CE78 L;
  St_82C3CE78 *s;
  Cb_82C3CE78 cb;
  void *ctx;
  unsigned n;
  unsigned left;
  L.c54 = 0;
  L.c60 = 0;
  L.c50 = 0;
  L.c5c = 0;
  L.c58 = 0;
  if (o->st != 0) {
    if (outp == 0) goto clear_n;
    if (outn != 0 && outf != 0) {
      *outp = 0;
      *outn = 0;
      *outf = 1;
      s = (St_82C3CE78 *)o->st;
      cb = s->cb;
      ctx = s->ctx;
      if (s->pad50[0] != 0) {
        *outp = s->f54;
        *outn = s->f58;
        *outf = 0;
        return 6;
      }
      if (s->avail == 0) {
        if (cb(ctx, &s->ptr, &s->total, &L.c54, &L.c60, &L.c50, &L.c5c, &L.c58) < 0) {
          *outp = 0;
          *outn = 0;
          *outf = 1;
          return 6;
        }
        if (L.c50 != 0) s->f48 = L.c60;
        if (L.c54 != 0) s->f70 = 1;
        s->avail = s->total;
      }
      if (off == 0 && (n = s->avail) >= 4 && ((unsigned)s->ptr & 3) == 0) {
        *outp = (unsigned)s->ptr;
        *outn = n;
      } else {
        n = s->avail;
        if (n > 0x1000) n = 0x1000;
        memcpy(s->buf + off, s->ptr, n);
        if (n < 4 && s->f70 == 0) {
          unsigned k = n;
          if (cb(ctx, &s->ptr, &s->total, &L.c54, &L.c60, &L.c50, &L.c5c, &L.c58) < 0) {
            *outp = 0;
            *outn = 0;
            *outf = 1;
            return 6;
          }
          if (L.c50 != 0) s->f48 = L.c60;
          if (L.c54 != 0) s->f70 = 1;
          n = s->total;
          s->avail = n;
          if (n > 0x1000) n = 0x1000;
          memcpy(s->buf + off + k, s->ptr, n);
          *outp = (unsigned)s->buf;
          *outn = k + n + off;
        } else {
          *outp = (unsigned)s->buf;
          *outn = n + off;
        }
      }
      left = s->avail;
      s->avail = left - n;
      s->ptr = s->ptr + n;
      if (s->f70 != 0 && left - n == 0) {
        *outf = 0;
        s->f70 = 0;
        return 6;
      }
      return 0;
    }
  }
  if (outp != 0) {
    *outp = 0;
  }
clear_n:
  if (outn != 0)
    *outn = 0;
  if (outf != 0)
    *outf = 0;
  return -3;
}
