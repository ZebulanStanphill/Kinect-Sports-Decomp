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

typedef struct A_826AB218 { int p0; unsigned mask; } A_826AB218;
typedef struct B_826AB218 { char p0[0xc]; unsigned m; } B_826AB218;
typedef struct R_826AB218 { void *obj; int hr; } R_826AB218;
extern int fn_826A9D30(void *, void *, unsigned);

R_826AB218 *fn_826AB218(R_826AB218 *r, A_826AB218 **a, B_826AB218 **b)
{
  int hr;
  if (*a != 0) {
    { unsigned am = (*a)->mask; unsigned bm = (*b)->m; hr = fn_826A9D30(a, b, am & bm); }
    if (hr >= 0) { r->obj = a; r->hr = hr; return r; }
  }
  r->obj = 0;
  r->hr = 0;
  return r;
}
