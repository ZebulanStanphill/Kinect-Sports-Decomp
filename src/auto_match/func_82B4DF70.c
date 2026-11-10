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
extern int fn_82AA6648();


undefined4 fn_82B4DF70(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_1[1] & 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*param_1 & 0xfffffffe) - 4;
  }
  uVar1 = *(undefined4 *)(*(int *)(iVar4 + 8) * 8 + iVar4 + 0xc);
  if (param_1[1] & 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*param_1 & 0xfffffffe) - 4;
  }
  *param_2 = *(undefined4 *)((*(int *)(iVar4 + 8) + 1) * 8 + iVar4);
  if (param_1[1] & 1) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)((*param_1 & 0xfffffffe) - 4);
  }
  uVar2 = puVar3[2];
  puVar3[2] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    uint *p = (uint *)((uint)puVar3 & ~1u);
    *(uint *)(p[1] & ~1u) = p[0];
    *(uint *)(p[0] & ~1u) = p[1];
    fn_82AA6648(param_1,puVar3,(puVar3[3] + 2) * 8);
  }
  return uVar1;
}

