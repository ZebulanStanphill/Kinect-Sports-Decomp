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
typedef struct Alloc_82D01A70 {
  int f0; unsigned f4; int f8; void *fc; void *f10; int f14; unsigned f18; unsigned f1c;
  int f20; int f24; int f28; int f2c; int f30;
} Alloc_82D01A70;
extern void fn_82D01568(Alloc_82D01A70 *, void *);

void fn_82D01A70(Alloc_82D01A70 *p, unsigned size, unsigned align, int a, int b)
{
  unsigned r;
  unsigned c;

  fn_82D01568(p, p->fc);
  p->fc = 0;
  fn_82D01568(p, p->f10);
  p->f14 = a;
  p->f0 = 0;
  p->fc = 0;
  p->f10 = 0;
  p->f18 = align;
  p->f20 = 0;
  p->f24 = 0;
  p->f28 = 0;
  p->f2c = 0;
  p->f30 = b;
  p->f8 = 0;
  if (size < align) {
    r = align;
  } else {
    r = (size + align - 1) & ~(align - 1);
  }
  p->f4 = r;
  if (align <= 0x10) {
    c = 0x1000;
  } else {
    c = align + 0xff0;
  }
  p->f1c = c;
}
