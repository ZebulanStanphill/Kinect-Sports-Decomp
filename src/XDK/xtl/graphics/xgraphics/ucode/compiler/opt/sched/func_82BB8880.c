
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
extern int fn_82AB15D0();
extern int fn_82B7BEB0();
extern int fn_82BBFD48();
extern int fn_82BC0088();
extern int fn_82BC6DC0();


void fn_82BB8880(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  unsigned char cVar6;
  int *piVar5;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  cVar6 = fn_82BBFD48(param_1 + 0x24);
  if (cVar6 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","ready_list.IsEmpty()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x535);
  }
  cVar6 = fn_82BBFD48(param_1 + 0x3c);
  if (cVar6 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","hold_list.IsEmpty()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x536);
  }
  cVar6 = fn_82BBFD48(param_1 + 0x54);
  if (cVar6 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","tried_list.IsEmpty()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x537);
  }
  uVar8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      if ((uVar8) < (uint)*(uint *)(iVar2 + 4)) {
        piVar5 = (int *)(*(int *)(iVar2 + 8) + iVar7);
      }
      else {
        piVar5 = (int *)fn_82BC0088(iVar2,uVar8);
      }
      puVar3 = (undefined4 *)*piVar5;
      *(undefined4 *)(puVar3[10] + 0x37c) = 0;
      if ((int)puVar3[9] != 0) {
        fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sn->topdown_count == 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x53e);
      }
      if ((int)puVar3[7] < 0) {
        fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sn->issue_cycle >= 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x53f);
      }
      uVar10 = 0;
      iVar2 = *(int *)(puVar3[0xc] + 4);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          iVar4 = puVar3[0xc];
          if ((uVar10) < (uint)*(uint *)(iVar4 + 4)) {
            piVar5 = (int *)(*(int *)(iVar4 + 8) + iVar9);
          }
          else {
            piVar5 = (int *)fn_82BC0088(iVar4,uVar10);
          }
          iVar4 = *piVar5;
          if ((unsigned)iVar4 != 0) {
            { int *p=(int *)iVar4-1; fn_82B7BEB0(*p,p); }
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 4;
        } while ((int)uVar10 < iVar2);
      }
      if (puVar3[0xc] != 0) {
        fn_82BC6DC0(puVar3[0xc],1);
      }
      if (puVar3[0xd] != 0) {
        fn_82BC6DC0(puVar3[0xd],1);
      }
      (*(code *)*puVar3)(puVar3,1);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)uVar8 < iVar1);
  }
  uVar8 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x14);
      if ((uVar8) < (uint)*(uint *)(iVar2 + 4)) {
        piVar5 = (int *)(*(int *)(iVar2 + 8) + iVar7);
      }
      else {
        piVar5 = (int *)fn_82BC0088(iVar2,uVar8);
      }
      puVar3 = (undefined4 *)*piVar5;
      uVar10 = 0;
      iVar2 = *(int *)(puVar3[0xc] + 4);
      if (0 < iVar2) {
        iVar9 = 0;
        do {
          iVar4 = puVar3[0xc];
          if ((uVar10) < (uint)*(uint *)(iVar4 + 4)) {
            piVar5 = (int *)(*(int *)(iVar4 + 8) + iVar9);
          }
          else {
            piVar5 = (int *)fn_82BC0088(iVar4,uVar10);
          }
          iVar4 = *piVar5;
          if ((unsigned)iVar4 != 0) {
            { int *p=(int *)iVar4-1; fn_82B7BEB0(*p,p); }
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 4;
        } while ((int)uVar10 < iVar2);
      }
      if (puVar3[0xc] != 0) {
        fn_82BC6DC0(puVar3[0xc],1);
      }
      if (puVar3[0xd] != 0) {
        fn_82BC6DC0(puVar3[0xd],1);
      }
      (*(code *)*puVar3)(puVar3,1);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)uVar8 < iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  return;
}

