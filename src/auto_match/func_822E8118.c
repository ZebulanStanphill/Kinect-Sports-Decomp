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
typedef struct { char b[0x28]; int m28; } Sub_822E8118;
typedef struct {
  int p0; int m4; int m8; int mc; int m10;
  char pad[0x1ec - 0x14];
  Sub_822E8118 sub;
} Obj_822E8118;

void fn_822E8118(Obj_822E8118 *o)
{
  Sub_822E8118 *a;
  unsigned int u;
  int b;

  fn_822CABC8();
  a = &o->sub;
  b = o->m10 + 0x20c;
  u = fn_82897B18(b);
  fn_82897600(o, a, u);
  a->m28 = o->mc;
  fn_82898220(a, o, b, o->m4);
}
