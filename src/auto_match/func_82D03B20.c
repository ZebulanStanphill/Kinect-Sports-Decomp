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


unsigned int fn_82D03B20(unsigned int param_1)
{
  unsigned int uVar1; unsigned char bit;
  unsigned int lVar2;
  unsigned int iVar3;
  unsigned int iVar4;

  lVar2 = 0;
  *(unsigned int *)(*(unsigned int *)(param_1 + 0x10) + 4) = *(unsigned int *)(param_1 + 0x14) | 1;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) = *(unsigned int *)(param_1 + 0x14);
  iVar3 = *(unsigned int *)(param_1 + 0xa8);
  if (iVar3 != param_1 + 0xa4) {
    do {
      for (iVar4 = *(unsigned int *)(iVar3 + 0x10); iVar4 != *(unsigned int *)(iVar3 + 0x14) - 0x10;
          iVar4 = (uVar1 & 0xfffffffc) + iVar4) {
        uVar1 = *(unsigned int *)(iVar4 + 4);
        bit = (unsigned char)(uVar1 >> 1 & 1);
        if (bit != 0) {
          lVar2 = (uVar1 & 0xfffffffc) + lVar2;
        }
      }
      iVar3 = *(unsigned int *)(iVar3 + 4);
    } while (iVar3 != param_1 + 0xa4);
  }
  return lVar2;
}
