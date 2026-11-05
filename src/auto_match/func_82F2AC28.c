extern int abs(int);
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


uint fn_82F2AC28(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int lVar3;
  
  uVar2 = abs((int)param_2);
  if ((*(int *)(param_1 + 0x624) == 0) || (2 < *(int *)(param_5 + 0x60))) {
    if (uVar2 >= param_4) {
      return (uint)*(uint *)(param_4 * 8 + param_3 + 4) + 9;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      return (uint)*(uint *)((int)((uVar2 & 0xffffffff) << 3) + param_3 + 4) + 1;
    }
  }
  else {
    lVar3 = 1;
    iVar1 = 1;
    if (*(int *)(param_5 + 0x60) == 1) {
      lVar3 = 2;
      iVar1 = 3;
    }
    if (((uint)(iVar1 + (int)uVar2) >> lVar3) >= param_4) {
      return (uint)*(uint *)(param_4 * 8 + param_3 + 4) + lVar3 + 9;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      return (uint)*(uint *)((int)((uVar2 & 0xffffffff) << 3) + param_3 + 4) + lVar3 + 1;
    }
  }
  return (uint)*(uint *)(param_3 + 4);
}

