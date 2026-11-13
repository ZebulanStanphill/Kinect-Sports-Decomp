extern unsigned int *auStack_50;
extern int fn_82574340();
extern int fn_825A2A88();


void fn_82573988(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  int iVar3;
  __int64 lVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned char auStack_50 [80];
  
  piVar1 = (int *)param_2;
  iVar3 = 0;
  puVar2 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  if (0 < piVar1[9]) {
    lVar4 = param_2 + 0x28;
    do {
      piVar5 = (int *)lVar4;
      if (*piVar5 != 0) {
        uVar13 = uVar9;
        uVar12 = uVar8;
        uVar11 = uVar7;
        uVar10 = uVar6;
        if (piVar5[1] == 0) {
          puVar2 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
        }
        else {
          if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(unsigned int *)
                     ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                     *(int *)(param_1 + 0x8c0));
          }
          fn_82574340(piVar5[1],param_1 + 0xf0,uVar9,auStack_50);
          puVar2 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
        }
        puVar2 = (unsigned int *)(*piVar5 + 0xa0U & 0xfffffff0);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        puVar2 = (unsigned int *)(*piVar5 + 0x10U & 0xfffffff0);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        uVar9 = uVar13;
        uVar8 = uVar12;
        uVar7 = uVar11;
        uVar6 = uVar10;
        if (*(int *)(*piVar5 + 0x1b0) != 0) {
          (**(int (***)())(**(int **)(*piVar5 + 0x1b0) + 8))(*(int **)(*piVar5 + 0x1b0),0x18,0);
          uVar9 = uVar13;
          uVar8 = uVar12;
          uVar7 = uVar11;
          uVar6 = uVar10;
        }
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < piVar1[9]);
  }
  lVar4 = 0;
  if (0 < *piVar1) {
    do {
      param_2 = param_2 + 4;
      iVar3 = fn_825A2A88(param_1,*(unsigned int *)param_2);
      if (iVar3 != 0) {
        puVar2 = (unsigned int *)(iVar3 + 0x30U & 0xfffffff0);
        *puVar2 = uVar6;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *piVar1);
  }
  return;
}

