void fn_82DC0398(unsigned char *param_1,int param_2,int *param_3,int param_4)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar8;
  __int64 lVar7;
  unsigned char uVar9;
  int *piVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  int aiStack_60 [24];
  
  uVar11 = *(unsigned int *)(param_2 + 0x48);
  piVar10 = param_3 + param_4;
  iVar13 = 0;
  iVar12 = 0;
  aiStack_60[1] = *(int *)(param_2 + 0x38);
  aiStack_60[0] = *(int *)(param_2 + 0x28);
  if (param_3 < piVar10) {
    uVar8 = (int)piVar10 + (3 - (int)param_3);
    if (1 < (int)(((int)uVar8 >> 2) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 3) != 0))) {
      lVar7 = (unsigned __int64)((unsigned int)((int)piVar10 + (-5 - (int)param_3)) >> 3) + 1;
      do {
        iVar2 = *param_3;
        piVar6 = param_3 + 1;
        param_3 = param_3 + 2;
        iVar3 = *(int *)(iVar2 + 0x30);
        iVar4 = *(int *)(*piVar6 + 0x30);
        iVar2 = (*(unsigned char *)(iVar2 + 0x1c) < 5) - 1;
        iVar5 = (*(unsigned char *)(*piVar6 + 0x1c) < 5) - 1;
        uVar1 = *(unsigned short *)(iVar4 + 0x14);
        iVar13 = (unsigned int)*(unsigned short *)(iVar3 + 0x18) * 4 + iVar13;
        iVar12 = (unsigned int)*(unsigned short *)(iVar4 + 0x18) * 4 + iVar12;
        aiStack_60[-iVar2] = (unsigned int)*(unsigned short *)(iVar3 + 0x14) + aiStack_60[-iVar2];
        aiStack_60[-iVar5] = (unsigned int)uVar1 + aiStack_60[-iVar5];
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (param_3 < piVar10) {
      iVar2 = *(int *)(*param_3 + 0x30);
      iVar3 = (*(unsigned char *)(*param_3 + 0x1c) < 5) - 1;
      uVar11 = (unsigned int)*(unsigned short *)(iVar2 + 0x18) * 4 + uVar11;
      aiStack_60[-iVar3] = (unsigned int)*(unsigned short *)(iVar2 + 0x14) + aiStack_60[-iVar3];
    }
    uVar11 = iVar12 + iVar13 + uVar11;
  }
  if (((*(unsigned int *)(param_2 + 0x44) < uVar11) || (*(unsigned int *)(param_2 + 0x24) < aiStack_60[0] + 4U)) ||
     (uVar9 = 1, *(unsigned int *)(param_2 + 0x34) < aiStack_60[1] + 4U)) {
    uVar9 = 0;
  }
  *param_1 = uVar9;
  return;
}

