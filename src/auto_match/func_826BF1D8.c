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
extern int fn_826BE388(unsigned *, int *, unsigned);



typedef struct { unsigned *p; int h; } R;
R * fn_826BF1D8(R *r,unsigned int *a,int *b)
{
  int h = 0;
  if (*a != 0) {
    unsigned m = *(unsigned*)(*a + 4); unsigned n = *(unsigned*)(*b + 0xc); h = fn_826BE388(a, b, n & m);
    if (h >= 0) { r->p = a; r->h = h; return r; }
  }
  r->p = 0; r->h = 0;
  return r;
}
