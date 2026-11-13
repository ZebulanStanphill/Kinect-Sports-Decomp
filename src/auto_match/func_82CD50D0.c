void fn_82CD50D0(int param_1,int param_2,int param_3,int param_4,__int64 param_5,__int64 param_6
                  ,int param_7)

{
  unsigned char *puVar1;
  unsigned char *puVar2;
  int iVar3;
  unsigned char *puVar4;
  int iVar5;
  int iVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned char *puVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  
  iVar11 = *(int *)(param_7 + 0x3920);
  param_6 = param_6 - param_5;
  iVar3 = (int)param_5;
  if (iVar11 == 0) {
    iVar6 = *(int *)(param_7 + 0x38fc) * iVar3;
    uVar12 = *(int *)(param_7 + 0x38fc) - *(int *)(param_7 + 0x3890);
    iVar8 = iVar6 >> 1;
    iVar10 = ((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    iVar11 = iVar10;
  }
  else {
    uVar12 = *(unsigned int *)(param_7 + 0x3890);
    iVar6 = iVar11 * iVar3;
    iVar5 = ((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    iVar8 = *(int *)(param_7 + 0x3924) * iVar3;
    uVar12 = iVar11 - uVar12;
    iVar10 = *(int *)(param_7 + 0x3928) - iVar5;
    iVar11 = *(int *)(param_7 + 0x3924) - iVar5;
  }
  puVar9 = (unsigned char *)(*(int *)(param_7 + 0x38cc) + iVar6 + param_2);
  param_1 = *(int *)(param_7 + 0x389c) * iVar3 + *(int *)(param_7 + 0x38a4) + param_1;
  if (0 < (int)param_6) {
    iVar3 = *(int *)(param_7 + 0x3890);
    puVar4 = (unsigned char *)(*(int *)(param_7 + 0x38d0) + iVar8 + param_3 + -1);
    puVar2 = (unsigned char *)(*(int *)(param_7 + 0x38d4) + iVar8 + param_4 + -1);
    do {
      iVar8 = 0;
      if (0 < iVar3) {
        puVar7 = (unsigned char *)(param_1 + -1);
        do {
          iVar8 = iVar8 + 2;
          puVar7[1] = *puVar9;
          puVar1 = puVar9 + 1;
          puVar9 = puVar9 + 2;
          puVar7[3] = *puVar1;
          puVar4 = puVar4 + 1;
          puVar7[2] = *puVar4;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 4;
          *puVar7 = *puVar2;
          iVar3 = *(int *)(param_7 + 0x3890);
        } while (iVar8 < iVar3);
      }
      puVar9 = puVar9 + uVar12;
      puVar4 = puVar4 + iVar11;
      puVar2 = puVar2 + iVar10;
      param_1 = *(int *)(param_7 + 0x389c) + param_1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

