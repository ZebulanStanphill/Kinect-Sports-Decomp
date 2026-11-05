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
struct Src_822419F8;
typedef struct { char pad0[4]; void (*f4)(struct Src_822419F8 *, int, int, float, int); char pad[0x14 - 8]; void (*f14)(struct Src_822419F8 *, int, void *); } VT_822419F8;
typedef struct Src_822419F8 { VT_822419F8 *vt; } Src_822419F8;
typedef struct { char pad[0x68]; Src_822419F8 *a68; int pad6c; Src_822419F8 *a70; int pad74; Src_822419F8 *a78; int pad7c; Src_822419F8 *a80; } Self_822419F8;
typedef struct { char pad[0x10]; Src_822419F8 *sink; } Dst_822419F8;

void fn_822419F8(Self_822419F8 *self, int key, Dst_822419F8 *dst, int d)
{
  struct { float f; int c; int b; int a; } L;
  Src_822419F8 *sink;
  self->a68->vt->f14(self->a68, key, &L.a);
  self->a70->vt->f14(self->a70, key, &L.b);
  self->a78->vt->f14(self->a78, key, &L);
  self->a80->vt->f14(self->a80, key, &L.c);
  if (dst->sink != 0) {
    dst->sink->vt->f4(dst->sink, L.a, L.b, L.f, L.c);
  }
}
