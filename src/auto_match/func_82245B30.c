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
extern void *memcpy(void *, const void *, unsigned);
extern int fn_8289D8D0(int);
extern char *fn_82236200(void *, int);

typedef struct IfaceVt_82245B30 { int pad[4]; unsigned (*f10)(void *); unsigned (*f14)(void *); } IfaceVt_82245B30;
typedef struct Iface_82245B30 { IfaceVt_82245B30 *vt; } Iface_82245B30;
typedef struct Sub_82245B30 { int pad0[2]; char *buf; unsigned size; } Sub_82245B30;
typedef struct Str_82245B30 {
  int pad0;
  Sub_82245B30 sub;
  int pad14[3];
  Iface_82245B30 *iface;
  int pad24;
  int arg;
} Str_82245B30;

void fn_82245B30(Str_82245B30 *self, void *dst, int off, unsigned len)
{
  unsigned r;
  char *p;
  Sub_82245B30 *s;

  r = self->iface ? self->iface->vt->f10(self->iface) : 0;
  if (r == 0) {
    r = self->iface ? self->iface->vt->f14(self->iface) : 0;
    if (r == 0) {
      s = &self->sub;
      if (self->sub.size <= 4) {
        p = (char *)&s->buf;
      } else {
        p = s->buf;
      }
      goto copy;
    }
  }
  p = fn_82236200(self, fn_8289D8D0(self->arg));
copy:
  memcpy(dst, p + off, len);
}
