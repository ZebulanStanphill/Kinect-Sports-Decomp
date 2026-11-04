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
extern int fn_83089FA0();
extern int fn_83089DB8();


void fn_83089DD8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (1 < (int)*(uint *)(param_1 + 0x54)) {
    fn_83089FA0(*(undefined4 *)(param_1 + 0x50),0,(unsigned int)*(uint *)(param_1 + 0x54) - 1,
                      fn_83089DB8);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar3 = 0;
    do {
      iVar5 = iVar4;
      piVar2 = (int *)(*(int *)(param_1 + 0x50) + iVar3);
      iVar3 = iVar3 + 8;
      iVar1 = *piVar2;
      *(short *)(((param_1 == *(int *)(iVar1 + 0x14)) + 2) * 2 + iVar1) = (short)iVar5;
      iVar4 = iVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x54));
  }
  return;
}

