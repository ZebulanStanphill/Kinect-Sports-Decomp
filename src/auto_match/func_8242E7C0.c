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
extern int fn_822ABA88();

void fn_8242E7C0(int param_1)
{
  int *piVar1;
  int iVar2;
  int *obj;
  int i;

  for (i = 0; i < *(int *)(*(int *)(param_1 + 0x174) + 0xbc); i++) {
    piVar1 = (*(int ***)(param_1 + 8))[0][i];
    iVar2 = fn_822ABA88(*(int *)(piVar1[4] * 4 + *piVar1), 0);
    obj = *(int **)(iVar2 + 0x24);
    if (obj != 0) {
      (*(code *)(*obj + 0x24))(obj);
    }
  }
  *(float *)(*(int *)(param_1 + 0x174) + 0xcc) =
       *(float *)(*(int *)(param_1 + 0x174) + 0xd0);
}
