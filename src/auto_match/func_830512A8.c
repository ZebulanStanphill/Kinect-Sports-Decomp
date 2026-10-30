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


typedef struct {
  ulonglong limit;
  unsigned int stride;
  char pad0[0x20 - 0xc];
  char cs[0x40 - 0x20];
  char pad1[0x54 - 0x40];
  unsigned int count;
  char pad2[0x60 - 0x58];
  char sub[8];
  longlong cur;
  char pad3[0x24 - 0x10];
  longlong **ptr;
  char pad4[0x2c - 0x28];
  unsigned int flag;
} Obj_830512A8;

ulonglong fn_830512A8(int param_1, unsigned int param_2)
{
  longlong lVar1;
  ulonglong uVar2;
  Obj_830512A8 *o = (Obj_830512A8 *)(param_1 - 0x60);

  RtlEnterCriticalSection(param_1 + -0x40);
  if (*(unsigned int *)(param_1 + 0x2c) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x24);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
  }
  uVar2 = lVar1 - (o->count * o->stride);
  if (param_2 != 0) {
    *(bool *)param_2 = uVar2 >= o->limit;
  }
  RtlLeaveCriticalSection(param_1 + -0x40);
  return uVar2;
}
