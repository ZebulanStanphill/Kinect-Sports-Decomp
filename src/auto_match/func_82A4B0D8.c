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
extern int fn_82A5C0A8();

unsigned int fn_82A4B0D8(int param_1, int param_2, int param_3)
{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *pNext;
  int vt;

  piVar2 = (int *)(param_1 + 0x54);
  vt = *(int *)(param_1 + 0x54);
  uVar3 = 0;
  (*(code *)(vt + 8))(piVar2);
  puVar4 = *(unsigned int **)(param_1 + 0x144);
  while (puVar4 != 0 && (int)uVar3 >= 0) {
    pNext = puVar4;
    if (puVar4 != 0) {
      puVar4 = (unsigned int *)pNext[1];
      uVar1 = *pNext;
    } else {
      uVar1 = 0;
    }
    uVar3 = fn_82A5C0A8(uVar1, param_2, param_3);
  }
  vt = *piVar2;
  (*(code *)(vt + 0x14))(piVar2);
  return uVar3;
}
