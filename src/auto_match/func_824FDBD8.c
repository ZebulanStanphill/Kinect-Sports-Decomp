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
typedef struct B_824FDBD8 { char pad[0x20]; int v; } B_824FDBD8;
typedef struct A_824FDBD8 { char pad[0x14]; B_824FDBD8 *p14; B_824FDBD8 *p18; char pad2[0xf8]; unsigned int f114; } A_824FDBD8;
extern A_824FDBD8 *fn_8249ABC0();

unsigned int fn_824FDBD8(int param_1)
{
  A_824FDBD8 *a;
  int x;

  if (param_1 == 0) {
    a = fn_8249ABC0();
    if (a->f114 != 0xffffffff) {
      return a->f114;
    }
    a = fn_8249ABC0();
    x = a->p14->v;
    if (x < 0) {
      x = a->p18->v;
      if (x < 0) {
        x = 0;
      }
      else {
        x = x == 0;
      }
    }
  }
  else {
    a = fn_8249ABC0();
    x = a->p18->v;
    if (x < 0) {
      x = a->p14->v;
      if (x < 0) {
        x = 1;
      }
      else {
        x = x == 0;
      }
    }
  }
  return x;
}
