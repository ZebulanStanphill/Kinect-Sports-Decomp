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
extern int fn_8267B890(int, unsigned int, int);
extern int fn_8267BDA8(unsigned int, unsigned int);


typedef struct { unsigned int h; int pad; unsigned int f8; unsigned int fc; int pad2; int f14; } Obj_8268B050;
void fn_8268B050(Obj_8268B050 *p, unsigned int n)
{
  unsigned int sz;
  int r;
  if (n >= p->f8) {
    sz = (p->fc + n) & ~(p->fc - 1);
    p->f8 = sz;
    if (p->h == 0) {
      r = fn_8267B890(p->f14, sz, 0);
    }
    else {
      r = fn_8267BDA8(p->h, sz);
    }
    p->h = r;
  }
}
