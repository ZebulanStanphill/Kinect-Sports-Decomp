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
extern void fn_82AA8FD0(float *, float *, float *, float *);
extern void fn_82B68FC0(float *, float *, float *, float *);
extern void fn_82B68D38(float *, float *, float *, float *);
extern void fn_82B69288(float *, float *, float *, float *);
extern void fn_82B68CA8(float *, float *);

void fn_82AAAE68(int n, int off, int idx, float **tab, int fC, int fB, int fA)
{
  float *p0 = tab[idx] + off;
  float *p1 = tab[idx + 1] + off;
  float *a = tab[idx + 2] + off;
  float *b = tab[idx + 3] + off;
  float *c = tab[idx + 4] + off;
  float *d = tab[idx + 5] + off;
  int i;
  if (fA != 0) fn_82AA8FD0(a, b, c, d);
  fn_82B68FC0(a, b, c, d);
  if (fB != 0) fn_82B68D38(p0, p1, a, b);
  p0 += 2;
  p1 += 2;
  a += 4;
  b += 4;
  c += 4;
  d += 4;
  i = 0;
  if (n - 4 > 0) {
    do {
      if (fA != 0) fn_82AA8FD0(a, b, c, d);
      fn_82B68FC0(a, b, c, d);
      if (fB != 0) fn_82B69288(p0, p1, a - 2, b - 2);
      if (fC != 0 && fB != 0) fn_82B68CA8(c - 2, d - 2);
      i += 4;
      a += 4;
      b += 4;
      c += 4;
      d += 4;
      p0 += 4;
      p1 += 4;
    } while (i < n - 4);
  }
  if (fB != 0) fn_82B68D38(p0, p1, a - 2, b - 2);
}
