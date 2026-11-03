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
extern int fn_82A2A288(int, int, int, int, void *, int);
extern int fn_830290F8(int, int, void *, int, int, int, int);

int fn_83029230(int p1, int p2, int p3, int p4, int p5, int p6, int p7)
{
  unsigned short buf[0x104];
  int r = 1;

  if (fn_82A2A288(0, 0, p3, -1, buf, 0x104) > 0) {
    r = fn_830290F8(p1, p2, buf, p4, p5, p6, p7);
  }
  return r;
}
