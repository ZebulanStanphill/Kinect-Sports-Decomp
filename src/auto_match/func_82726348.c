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
typedef struct { int a, b, c, d, e; } Sub_82726348;
typedef struct { void *vt; int f4; int f8; Sub_82726348 sub; } Obj_82726348;
extern unsigned int lbl_82010CE4;
void fn_82726348(Obj_82726348 *o)
{
  int i;
  int *p = &o->sub.a;
  o->f4 = 1;
  o->vt = &lbl_82010CE4;
  o->f8 = 0x18;
  for (i = 0; i < 5; i++) p[i] = 0;
}
