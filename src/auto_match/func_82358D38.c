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
extern __declspec(noreturn) void fn_82F63108(void);


void fn_82358D38(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x20);
  piVar1 = *(int **)(param_1 + 0x24);
  do {
    if (piVar3 >= piVar1) {
      return;
    }
    piVar4 = *(unsigned int **)*piVar3;
    piVar2 = (int *)((undefined4 *)*piVar3)[1];
    for (; piVar4 < piVar2; piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        if (*(unsigned *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (*(code *)(**(int **)(param_2 + 0x10) + 4))((int *)*(unsigned *)(param_2+0x10),*piVar4);
      }
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

