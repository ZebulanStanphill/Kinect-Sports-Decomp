extern unsigned int lbl_8201482C;


void fn_8275FE18(unsigned int *param_1,int param_2)

{
  unsigned char bVar1;
  short sVar2;
  unsigned short uVar3;
  unsigned char *pbVar4;
  short *psVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned short *puVar11;
  unsigned int uVar12;
  
  pbVar4 = *(unsigned char **)(param_2 + 4);
  param_1[1] = 0;
  *param_1 = pbVar4;
  param_1[9] = *(unsigned int *)(param_2 + 0x20);
  param_1[6] = 1;
  if (pbVar4 == (unsigned char *)0x0) {
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  else {
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) {
      psVar5 = (short *)((unsigned int)(pbVar4 + 5) & 0xfffffffe);
      param_1[2] = (bVar1 >> 1 & 3) + 1;
      param_1[7] = psVar5;
      param_1[5] = bVar1 >> 3 & 0xf;
      sVar2 = *psVar5;
      param_1[7] = psVar5 + 1;
      param_1[3] = (int)sVar2;
      param_1[4] = (int)psVar5[1];
      param_1[7] = psVar5 + 2;
      return;
    }
    uVar12 = bVar1 >> 1 & 3;
    uVar9 = -(unsigned int)((bVar1 & 8) != 0) & 2;
    iVar10 = uVar9 + 2;
    if ((bVar1 >> 1 & 3) == 0) {
      param_1[2] = 0;
      return;
    }
    bVar1 = bVar1 >> 4;
    iVar8 = *(int *)(&lbl_8201482C + uVar12 * 4);
    param_1[2] = (unsigned int)bVar1;
    puVar11 = (unsigned short *)
              ((((unsigned int)(pbVar4 + uVar12) & ~(uVar12 - 1)) + iVar8 * 3 + iVar10) - 1 & ~(uVar9 + 1));
    if (iVar10 == 2) {
      param_1[7] = puVar11;
      if (bVar1 == 0) {
        uVar3 = *puVar11;
        param_1[7] = puVar11 + 1;
        param_1[2] = (unsigned int)uVar3;
      }
      psVar5 = (short *)param_1[7];
      sVar2 = *psVar5;
      param_1[7] = psVar5 + 1;
      param_1[3] = (int)sVar2;
      sVar2 = psVar5[1];
      param_1[7] = psVar5 + 2;
      param_1[4] = (int)sVar2;
      param_1[5] = (unsigned int)(unsigned short)psVar5[2];
      param_1[7] = psVar5 + 3;
      param_1[8] = 0;
      return;
    }
    param_1[8] = puVar11;
    if (bVar1 == 0) {
      uVar6 = *(unsigned int *)puVar11;
      param_1[8] = puVar11 + 2;
      param_1[2] = uVar6;
    }
    puVar7 = (unsigned int *)param_1[8];
    uVar6 = *puVar7;
    param_1[8] = puVar7 + 1;
    param_1[3] = uVar6;
    param_1[4] = puVar7[1];
    param_1[8] = puVar7 + 2;
    param_1[5] = puVar7[2];
    param_1[8] = puVar7 + 3;
  }
  param_1[7] = 0;
  return;
}

