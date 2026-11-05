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
extern int fn_82359C70(void *,float);


int fn_823588D0(int *param_2,float param_1)

{
  int uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(*(int *)(param_2[0x35] + 0x18) + 0xc);
  param_2[0x39] = uVar1 != 0 && param_2[0x37] == 0;
  param_2[0x38] = uVar1 == 0 && param_2[0x37] != 0;
  param_2[0x37] = uVar1;
  param_2[0x3a] = uVar1 | param_2[0x3a];
  uVar4 = (uint)(uVar1 == 0) & param_2[0x3b];
  param_2[0x3b] = uVar4;
  if (uVar4 != 0) {
    iVar2 = (*(code *)(*param_2 + 0x98))(param_2,0);
    if (iVar2 != 0) {
      (*(code *)(*param_2 + 0x90))(param_2,1);
      param_2[0x3b] = 0;
    }
  }
  param_2[0x3d] = param_2[0x3e];
  param_2[0x3e] = 0;
  param_2[0x41] = param_2[0x42];
  param_2[0x42] = 0;
  param_2[0x43] = param_2[0x44];
  param_2[0x44] = 0;
  param_2[0x3f] = param_2[0x40];
  param_2[0x40] = 0;
  if ((int *)param_2[0x21] != (int *)0x0) {
    (*(code *)(*(int *)param_2[0x21] + 0x44))(param_2[0x21]);
  }
  fn_82359C70(param_2+0x10,param_1);
  if (((unsigned)param_2[0x24] != 0) && ((param_2[0x28] == 0 || (*(unsigned *)(param_2[0x28] + 0x40) != 1)))) {
    uVar3 = (*(code *)(*param_2 + 0xb4))(param_2);
    *(undefined4 *)(param_2[0x24] + 0x50c) = uVar3;
  }
  return 0;
}

