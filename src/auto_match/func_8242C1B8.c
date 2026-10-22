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
extern int fn_8242C410();
extern unsigned char fn_8288B760(void *);


int fn_8242C1B8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  unsigned char *iVar4;
  int uVar5;
  uint iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar3 = fn_8242C410(param_1);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar3);
      iVar4 = (unsigned char *)fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      bVar2 = *(unsigned char *)(*(int *)(param_1+0x174)+200) == 0 ||
        (*(void **)(iVar4+0x168) ? (int)fn_8288B760(*(void **)(iVar4+0x168)) : *(int *)(iVar4+0x16c));
      if ((*(int *)(iVar4 + 0x24) != 0) && (bVar2)) {
        if (iVar6 == *(int *)(*(int *)(param_1 + 0x174) + 0xc0)) {
          return (int)iVar4;
        }
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = (unsigned char *)fn_8242C410(param_1);
    } while (iVar7 < (int)iVar4);
  }
  return 0;
}

