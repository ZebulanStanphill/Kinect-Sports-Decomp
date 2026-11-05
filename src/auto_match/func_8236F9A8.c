extern unsigned _CountLeadingZeros(unsigned);
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
extern unsigned fn_822AA770(unsigned);
extern unsigned char fn_8288B760(int);


int fn_8236F9A8(int param_1)

{
  unsigned uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned iVar5;
  unsigned uVar6;
  
  iVar2 = *(int *)(param_1 + 0x1e0);
  if (iVar2 != 8) {
    iVar5 = fn_822AA770(*(undefined4 *)(**(int **)(param_1 + 8) + iVar2 * 4));
    if (iVar5 != 0) {
      if (*(unsigned *)(iVar5+0x168)) uVar6 = fn_8288B760(*(unsigned *)(iVar5+0x168)); else uVar6 = *(int *)(iVar5+0x16c);
      if ((int)uVar6 != 0) {
        piVar3 = *(int **)(((uint)_CountLeadingZeros(iVar2) >> 3 & 4) + **(int **)(param_1 + 8));
        piVar4 = *(int **)(**(int **)(param_1 + 8) + iVar2 * 4);
        uVar6 = (unsigned)(int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
        uVar1 = (unsigned)(int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
        if (((uVar6 == uVar1 - 1) && (2 < uVar6)) && (2 < uVar1)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

