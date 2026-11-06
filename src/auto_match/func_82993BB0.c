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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8295D318();


void fn_82993BB0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint end;
  code callback;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int lVar11;
  undefined4 auStack_80 [4];
  undefined4 auStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  
  puVar1 = (uint *)param_1[0x41];
  callback=*(code *)(*param_1+0x154);
  uVar2 = *puVar1;
  uVar7 = uVar2 & 0xfffff;
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  end=uVar7*4+uVar3;
  iVar8 = callback(param_1,param_1[0x40],auStack_70,4,0,0);
  if (iVar8 >= 0) {
    iVar8 = param_1[0x89];
    iVar6 = param_1[0x8a];
    uVar9 = 0;
    iVar10 = 0;
    lVar11 = 4;
    do {
      *(int *)((int)aiStack_50 + iVar10) = iVar8;
      *(int *)((int)aiStack_60 + iVar10) = iVar6;
      if (uVar9 < uVar4) {
        *(undefined4 *)((int)auStack_80 + iVar10) =
             auStack_70[*(int *)(*(int *)(*(int *)(iVar10 + uVar5) * 4 + param_1[5]) + 0x10)];
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    fn_8295D318(param_1,2,auStack_80,uVar4,uVar3,
                      end,0,uVar7,0,0x1000000,0,0);
    fn_8295D318(param_1,0x58,uVar5,uVar4,auStack_80,aiStack_50,aiStack_60,uVar7,0,0,0,0);
  }
  return;
}

