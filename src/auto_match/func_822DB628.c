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
typedef struct Str_822DB628 { void *p; int pad; unsigned cap; int extra; } Str_822DB628;
extern Str_822DB628 *fn_822DB770(Str_822DB628 *, Str_822DB628 *);
extern long fn_822DBA58(void *, void *, Str_822DB628 *);
extern void fn_8265CAA0(void *);

long fn_822DB628(void *param_1, void *param_2, Str_822DB628 *param_3)
{
  struct { Str_822DB628 a, b, c, d; } L;
  Str_822DB628 *pa, *pb;
  long r;
  pa = fn_822DB770(&L.a, param_3);
  pb = fn_822DB770(&L.b, pa);
  fn_822DB770(&L.c, pb);
  L.c.extra = 1;
  if (pb->cap > 8 && pb->p != 0) fn_8265CAA0(pb->p);
  fn_822DB770(&L.d, &L.c);
  L.d.extra = L.c.extra;
  if (L.c.cap > 8 && L.c.p != 0) fn_8265CAA0(L.c.p);
  if (pa->cap > 8 && pa->p != 0) fn_8265CAA0(pa->p);
  r = fn_822DBA58(param_1, param_2, &L.d);
  if (param_3->cap > 8 && param_3->p != 0) fn_8265CAA0(param_3->p);
  return r;
}
