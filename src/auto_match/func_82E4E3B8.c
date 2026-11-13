void fn_82E4E3B8(int param_1,int param_2,int param_3,int param_4,__int64 param_5,__int64 param_6
                  ,int param_7)

{
  unsigned char uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  unsigned int uVar8;
  unsigned char *puVar9;
  __int64 lVar10;
  unsigned char *puVar11;
  int iVar12;
  int iVar13;
  
  uVar2 = *(unsigned int *)(param_7 + 0x3924);
  uVar8 = uVar2 * (int)param_5;
  iVar3 = ((int)uVar8 >> 2) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 3) != 0);
  iVar12 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_1 = *(int *)(param_7 + 0x38bc) * (int)param_5 + *(int *)(param_7 + 0x38c4) + param_1;
  param_2 = *(int *)(param_7 + 0x38a4) + uVar8 + param_2;
  param_3 = *(int *)(param_7 + 0x38a8) + iVar3 + param_3;
  param_4 = *(int *)(param_7 + 0x38ac) + iVar3 + param_4;
  if (0 < param_6 - param_5) {
    iVar3 = *(int *)(param_7 + 0x388c);
    iVar13 = -2 - param_2;
    lVar10 = (((param_6 - param_5) - 1U & 0xffffffff) >> 1) + 1;
    do {
      if (0 < iVar3) {
        puVar7 = (unsigned char *)(*(int *)(param_7 + 0x38bc) + param_1 + -1);
        puVar9 = (unsigned char *)(param_2 + 2);
        puVar4 = (unsigned char *)(param_3 + -2);
        puVar11 = (unsigned char *)(param_1 + -1);
        puVar5 = (unsigned char *)(param_4 + 3);
        puVar6 = (unsigned char *)(*(int *)(param_7 + 0x3924) + param_2 + -1);
        do {
          uVar1 = puVar11[1];
          puVar4[3] = uVar1;
          puVar4[2] = uVar1;
          puVar9[-2] = puVar11[2];
          uVar1 = puVar11[3];
          puVar5[-2] = uVar1;
          puVar5[-3] = uVar1;
          puVar9[-1] = puVar11[4];
          uVar1 = puVar11[5];
          puVar5[param_3 - param_4] = uVar1;
          puVar4 = puVar4 + 4;
          *puVar4 = uVar1;
          *puVar9 = puVar11[6];
          uVar1 = puVar11[7];
          *puVar5 = uVar1;
          puVar5[-1] = uVar1;
          puVar5 = puVar5 + 4;
          puVar9[1] = puVar11[8];
          puVar9[2] = puVar11[9];
          puVar9[3] = puVar11[10];
          puVar9[4] = puVar11[0xb];
          puVar11 = puVar11 + 0xc;
          puVar9[5] = *puVar11;
          puVar9 = puVar9 + 8;
          puVar6[1] = puVar7[2];
          puVar6[2] = puVar7[4];
          puVar6[3] = puVar7[6];
          puVar6[4] = puVar7[8];
          puVar6[5] = puVar7[9];
          puVar6[6] = puVar7[10];
          puVar6[7] = puVar7[0xb];
          puVar7 = puVar7 + 0xc;
          puVar6 = puVar6 + 8;
          *puVar6 = *puVar7;
          iVar3 = *(int *)(param_7 + 0x388c);
        } while ((int)(puVar9 + iVar13) < iVar3);
      }
      param_2 = uVar2 * 2 + param_2;
      iVar13 = uVar2 * -2 + iVar13;
      param_1 = param_1 + *(int *)(param_7 + 0x38c0);
      param_3 = iVar12 + param_3;
      param_4 = iVar12 + param_4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

