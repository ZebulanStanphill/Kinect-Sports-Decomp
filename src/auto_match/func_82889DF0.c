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
extern int fn_825089A0();


static void clear(unsigned *p) {
 unsigned v = p[0];
 if (v) { int *a = (int *)fn_825089A0(); (*(code *)(*a + 0x28))(a,v); }
 p[0]=0; p[1]=0; p[2]=0;
}
void fn_82889DF0(int *param_1)

{
  int *piVar1;
  uint iVar2;
  uint iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar5 != (int *)*param_1) {
    do {
      iVar2 = piVar5[2];
      piVar1 = (int *)*piVar5;
      if (iVar2 != 0) {
        clear((unsigned *)(iVar2+0x14));
        clear((unsigned *)(iVar2+4));
        piVar4 = (int *)fn_825089A0();
        (*(code *)(*piVar4 + 0x28))(piVar4,iVar2);
      }
      piVar4 = (int *)fn_825089A0();
      (*(code *)(*piVar4 + 0x28))(piVar4,piVar5);
      piVar5 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}

