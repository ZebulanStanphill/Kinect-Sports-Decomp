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
extern unsigned int fn_82A36B70(int, int, int *, int, unsigned int);

int fn_82A2B6B0(int a, int b, int *c, int d, unsigned int e)
{
  unsigned int r;
  if (e == 0) {
    *c = 0;
    return 0;
  }
  r = fn_82A36B70(a, b, c, d, e);
  switch (r) {
  case 0:
    return 0;
  case 1:
    return 0x8007000e;
  case 6:
    return 0x81de2001;
  default:
    return 0x80004005;
  }
}
