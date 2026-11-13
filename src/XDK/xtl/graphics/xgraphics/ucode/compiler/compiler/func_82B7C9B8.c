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
typedef struct Obj_82B7C9B8 {
  char pad0[0x554];
  int f554;
  char pad1[0x5a8 - 0x558];
  int f5a8;
  char pad2[0x5d8 - 0x5ac];
  int f5d8, f5dc, f5e0;
  char pad3[0x604 - 0x5e4];
  int a0[20];
  int a1[20];
  int a2[20];
  int a3[20];
  int a4[20];
  char pad4[0x7e8 - 0x794];
  unsigned char b7e8, b7e9, b7ea, b7eb, b7ec, b7ed, b7ee;
  char pad5;
  int f7f0, f7f4;
  int g[22];
  char pad6[0xaac - 0x850];
  int faac;
} Obj_82B7C9B8;
extern int fn_82B7BD28(int a, int b);
extern void fn_82B7C490(Obj_82B7C9B8 *o, int i);

void fn_82B7C9B8(Obj_82B7C9B8 *o)
{
  int i;

  o->faac = 0;
  o->f554 = 0;
  o->f7f4 = -1;
  o->f7f0 = 0;
  o->b7ed = 0;
  o->b7e9 = 0;
  o->b7ea = 0;
  o->b7ec = 0;
  o->b7eb = 0;
  o->b7ee = 0;
  o->b7e8 = 0;
  o->g[21] = 0;
  o->g[0] = 0;
  for (i = 0; i < 20; i++) {
    o->a0[i] = 0;
    o->a1[i] = 0;
    o->a2[i] = 0;
    o->a3[i] = 0;
    o->a4[i] = 0;
    o->g[i + 1] = 0;
  }
  for (i = 0; i < 3; i++) {
    fn_82B7C490(o, i);
  }
  o->f5d8 = fn_82B7BD28(o->f5a8, 0x2000);
  o->f5dc = 0;
  o->f5e0 = 0;
}
