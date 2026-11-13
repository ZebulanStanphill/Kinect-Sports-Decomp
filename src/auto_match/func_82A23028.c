#define true 1
extern unsigned int *__imp__XexExecutableModuleHandle;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1DDC0();
extern int fn_82A1F888();
extern int fn_82A1FBD8();
extern int fn_82A207C8();
extern int fn_82A214B0();
extern int fn_82A21608();
extern unsigned int iStack_8c;
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


unsigned __int64 fn_82A23028(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int *piVar5;
  int iVar6;
  __int64 lVar4;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  struct { unsigned int first; int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int auStack_80 [2];
  unsigned int auStack_78;
  
  uVar9 = 0;
  uVar10 = 0;
  piVar5 = (int *)0x0;
  RtlEnterCriticalSection(0xffffffff83219ba0);
  RtlEnterCriticalSection(param_1);
  uVar3 = fn_82A1F888(*(unsigned int *)(param_1 + 0x28),0);
  uVar8 = (uVar3 & 0xffffffff) >> 0x1e;
  if (uVar8 == 3) goto LAB_82a233a8;
  if (*(int *)(param_1 + 0x34) == 0) {
    piVar5 = (int *)fn_8265C940(0x1000,lbl_8315D2EC);
    if (piVar5 == (int *)0x0) {
LAB_82a232f4:
      uVar9 = 8;
    }
    else {
      uStack_88 = 0;
      uStack_84 = 0;
      puVar2 = *(unsigned int **)(param_1 + 0x28);
      uVar3 = (**(int (***)())(lbl_83219B8C + 0x10))(*puVar2,0,0,0,auStack_80,piVar5,0x1000,&uStack_88);
      if ((int)uVar3 == 0x103) {
        uVar3 = NtWaitForSingleObjectEx(*puVar2,1,0,0);
        if (-1 < (int)uVar3) {
          uVar3 = (unsigned __int64)auStack_80[0];
        }
      }
      uVar8 = (uVar3 & 0xffffffff) >> 0x1e;
      if (uVar8 != 3) {
        if (((piVar5[2] == param_2) && (piVar5[1] == 3)) && (*piVar5 == -0x521453c)) {
          if (*__imp__XexExecutableModuleHandle == 0) {
LAB_82a23190:
            iVar6 = 0;
          }
          else {
            iVar6 = RtlImageXexHeaderField
                              (*(unsigned int *)(*__imp__XexExecutableModuleHandle + 0x58),0x40006);
            if ((__int64)-(unsigned __int64)(iVar6 == 0) < 0) goto LAB_82a23190;
            iVar6 = *(int *)(iVar6 + 4);
          }
          if (piVar5[3] == iVar6) {
            fn_8265C990(piVar5,lbl_8315D2EC);
            *(unsigned int *)(param_1 + 0x34) = 1;
            goto LAB_82a231b4;
          }
        }
LAB_82a232fc:
        uVar9 = 0xb;
      }
    }
  }
  else {
LAB_82a231b4:
    piVar5 = (int *)0x0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    do {
      uVar10 = fn_8265C940(0x1000,lbl_8315D2EC);
      if (uVar10 == 0) goto LAB_82a232f4;
      stack_pair_90.first = 0;
      puVar2 = *(unsigned int **)(param_1 + 0x28);
      stack_pair_90.second = (*(int *)(param_1 + 0x20) + 1) * 0x1000;
      uVar3 = (**(int (***)())(lbl_83219B8C + 0x10))(*puVar2,0,0,0,&auStack_78,uVar10,0x1000,&stack_pair_90.first);
      if ((int)uVar3 == 0x103) {
        uVar3 = NtWaitForSingleObjectEx(*puVar2,1,0,0);
        if (-1 < (int)uVar3) {
          uVar3 = (unsigned __int64)auStack_78;
        }
      }
      uVar8 = (uVar3 & 0xffffffff) >> 0x1e;
      if (uVar8 == 3) break;
      iVar6 = fn_82A207C8(uVar10,0x1000,0x24,0);
      if (iVar6 == 0) goto LAB_82a232fc;
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar1 = *(unsigned short *)(iVar6 + 2);
        if ((unsigned __int64)*(unsigned int *)(param_1 + 0x24) < (unsigned __int64)uVar1) {
          lVar4 = fn_8265C940((unsigned __int64)uVar1 << 2,lbl_8315D2EC);
          if (lVar4 == 0) goto LAB_82a232f4;
          fn_82A1DDC0(lVar4,*(unsigned int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) << 2);
          fn_8265C990(*(unsigned int *)(param_1 + 0x1c),lbl_8315D2EC);
          *(int *)(param_1 + 0x1c) = (int)lVar4;
          *(unsigned int *)(param_1 + 0x24) = (unsigned int)uVar1;
        }
      }
      uVar10 = 0;
      *(int *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x1c)) = iVar6;
      uVar7 = *(int *)(param_1 + 0x20) + 1;
      *(unsigned int *)(param_1 + 0x20) = uVar7;
    } while (uVar7 < *(unsigned short *)(iVar6 + 2));
    *(int *)(param_1 + 0x2c) = param_1 + 0x2c;
    stack_pair_90.first = 0xffffffff;
    stack_pair_90.second = 0xffffffff;
    *(int *)(param_1 + 0x30) = param_1 + 0x2c;
    while( true ) {
      lVar4 = fn_82A21608(param_1,&stack_pair_90.first);
      if (lVar4 == 0) break;
      fn_82A1FBD8(param_1);
      fn_82A214B0(param_1);
    }
    RtlEnterCriticalSection();
    stack_pair_90.first = 0xffffffff;
    stack_pair_90.second = -1;
    while( true ) {
      iVar6 = fn_82A21608(param_1,&stack_pair_90.first);
      if (iVar6 == 0) break;
      *(unsigned char *)(iVar6 + 0x1a) = 1;
      *(unsigned int *)(iVar6 + 0x1c) = *(unsigned int *)(iVar6 + 0x1c) & 0xd1;
      fn_82A214B0(param_1);
    }
    RtlLeaveCriticalSection();
    *(unsigned int *)(param_1 + 0x38) = 0;
  }
  puVar2 = *(unsigned int **)(param_1 + 0x28);
  (**(int (***)())(lbl_83219B8C + 4))(*puVar2);
  *puVar2 = 0xffffffff;
LAB_82a233a8:
  RtlLeaveCriticalSection(param_1);
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  if (piVar5 != (int *)0x0) {
    fn_8265C990(piVar5,lbl_8315D2EC);
  }
  if ((uVar10 & 0xffffffff) != 0) {
    fn_8265C990(uVar10,lbl_8315D2EC);
  }
  if (uVar8 == 3) {
    uVar9 = RtlNtStatusToDosError(uVar3);
  }
  return uVar9;
}

