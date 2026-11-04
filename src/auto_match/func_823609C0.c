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
extern int fn_822ABA88(int, unsigned int);
extern int fn_822C72E0(int, char *);
extern unsigned int strlen(const char *);

void fn_823609C0(int param_1, int param_2, char *param_3)
{
  int *piVar2;
  int iVar3;
  unsigned int i;

  i = 0;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
  if (*(unsigned int *)(iVar3 + 8) > 0) {
    do {
      if (strlen(param_3) != 0) {
        iVar3 = fn_822ABA88(iVar3, i);
        fn_822C72E0(*(int *)(*(int *)(iVar3 + 0x114) + 0x20), param_3);
      }
      i = i + 1;
      iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
    } while (i < *(unsigned int *)(iVar3 + 8));
  }
}
