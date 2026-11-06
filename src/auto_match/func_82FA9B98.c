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
typedef struct { int v; int n; } Arg_82FA9B98;
extern void fn_82FA8A88(int, Arg_82FA9B98 *, int);
extern double lbl_8216CC20;

typedef struct {
  char pad0[0xc];
  int f0c;
  char pad10[0x20 - 0x10];
  int f20;
  char pad24[0x32 - 0x24];
  unsigned short flags;
  char pad34[0x40 - 0x34];
  int f40;
} Obj_82FA9B98;

void fn_82FA9B98(Obj_82FA9B98 *o)
{
  Arg_82FA9B98 a;
  int x;
  int y;

  x = o->f0c;
  a.n = 4;
  y = -(o->f20 + x);
  if (y < x) {
    x = y;
  }
  a.v = (int)((double)(__int64)x * lbl_8216CC20);
  fn_82FA8A88(o->f40, &a, -1);
  o->flags = o->flags | 0x8000;
}
