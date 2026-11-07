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
typedef unsigned int undefined8;
typedef unsigned int ulonglong;
typedef unsigned __int64 qword;
typedef int longlong;
typedef int code();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


void fn_826C7AB8(int *param_1)

{
  int *piVar1;
  bool bVar2;
  unsigned char lVar3;
  ulonglong uVar4; uint count;
  byte bVar5;
  int iVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x38))(param_1) != 0;
  if ((((*(byte *)((int)param_1 + 0x66) & 1) != 0) || (lVar3 == 0)) &&
     (count = (uint)param_1[0x2b], count != 0)) {
    iVar6 = 0;
    uVar4=count;
    do {
      piVar1 = *(int **)(iVar6 + param_1[0x2a]);
      bVar2 = ((*(byte *)((int)param_1 + 0x66) & 1) != 0) || lVar3;
      if (bVar2) {
        bVar5 = *(byte *)((int)piVar1 + 0x66) | 1;
      }
      else {
        bVar5 = *(byte *)((int)piVar1 + 0x66) & 0xfe;
      }
      *(byte *)((int)piVar1 + 0x66) = bVar5;
      (**(code **)(*piVar1 + 0x3c))(piVar1);
      uVar4 = uVar4 - 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 != 0);
  }
  return;
}

