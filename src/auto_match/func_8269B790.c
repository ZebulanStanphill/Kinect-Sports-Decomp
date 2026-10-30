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
extern int fn_8267C4C8();
extern int fn_8267C4F0();


typedef struct {
  char pad0[8];
  int sub;
  char pad1[0xb00 - 0xc];
  unsigned int hi : 30;
  unsigned int flag : 1;
  unsigned int lo : 1;
} Obj_8269B790;

unsigned int fn_8269B790(Obj_8269B790 *o)
{
  unsigned int uVar1;
  unsigned int *w = (unsigned int *)((char *)o + 0x108);
  if (!(unsigned char)o->flag) {
    uVar1 = (*(code *)(*(int *)&o->sub + 0xc))((char *)o + 8, 4);
    if (uVar1 != 0) {
      fn_8267C4C8(uVar1);
    }
    if (*w != 0) {
      fn_8267C4F0(*w);
    }
    *w = (int)uVar1;
    if (uVar1 != 0) {
      fn_8267C4F0(uVar1);
    }
  }
  return *w;
}
