extern unsigned int iStack_100;


void fn_82F27150(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  short sVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *puVar4;
  int *piVar5;
  unsigned char *pbVar6;
  int iVar7;
  short *psVar8;
  unsigned char *pbVar9;
  int iVar10;
  unsigned char *pbVar11;
  int iVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *puVar16;
  unsigned char *puVar17;
  unsigned char *puVar18;
  __int64 lVar19;
  int aiStack_120 [8];
  int iStack_100;
  
  param_6 = param_6 * 4;
  psVar8 = (short *)(param_6 + -0x7ce46628);
  pbVar14 = (unsigned char *)(param_2 * 6 + param_1);
  pbVar3 = (unsigned char *)(param_2 * 8 + param_1);
  pbVar15 = (unsigned char *)(param_2 * 7 + param_1);
  pbVar13 = (unsigned char *)(param_2 * 5 + param_1);
  pbVar11 = (unsigned char *)(param_2 * 4 + param_1);
  pbVar9 = (unsigned char *)(param_2 * 3 + param_1);
  puVar4 = (unsigned char *)(param_4 * 2 + param_3);
  iVar7 = 0;
  pbVar6 = (unsigned char *)(param_1 + param_2);
  do {
    pbVar14 = pbVar14 + 1;
    pbVar15 = pbVar15 + 1;
    pbVar13 = pbVar13 + 1;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
    pbVar3 = pbVar3 + 1;
    sVar1 = *(short *)(param_5 * 4 + -0x7ce46628);
    iVar12 = (int)*(short *)(param_5 * 4 + -0x7ce46626);
    iVar10 = (int)sVar1;
    lVar19 = 2;
    iStack_100 = (unsigned int)pbVar6[param_2 * 7] * iVar10 + (unsigned int)*pbVar3 * iVar12;
    aiStack_120[6] = (unsigned int)pbVar6[param_2 * 5] * (int)sVar1 + (unsigned int)*pbVar14 * iVar12;
    aiStack_120[5] = (unsigned int)pbVar6[param_2 * 4] * (int)sVar1 + (unsigned int)*pbVar13 * iVar12;
    iVar2 = param_4 * 4;
    aiStack_120[1] = (unsigned int)pbVar6[1] * iVar12 + (unsigned int)*pbVar6 * iVar10;
    aiStack_120[2] = (unsigned int)pbVar6[param_2] * iVar10 + (unsigned int)pbVar6[param_2 + 1] * iVar12;
    aiStack_120[3] = (unsigned int)pbVar6[param_2 * 2] * iVar10 + (unsigned int)*pbVar9 * iVar12;
    piVar5 = aiStack_120 + 1;
    puVar18 = (unsigned char *)(iVar7 + param_3);
    puVar16 = puVar4 + param_4 * -3;
    aiStack_120[4] = (unsigned int)pbVar6[param_2 * 3] * iVar10 + (unsigned int)*pbVar11 * iVar12;
    aiStack_120[7] = (unsigned int)pbVar6[param_2 * 6] * iVar10 + (unsigned int)*pbVar15 * iVar12;
    puVar17 = puVar4;
    do {
      iVar10 = *piVar5;
      iVar12 = ((*(short *)(param_6 + -0x7ce46626) * iVar10 + (int)*psVar8 * piVar5[-1]) - param_7)
               + 8 >> 4;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      *puVar18 = (char)iVar12;
      iVar12 = piVar5[1];
      iVar10 = ((*psVar8 * iVar10 + *(short *)(param_6 + -0x7ce46626) * iVar12) - param_7) + 8 >> 4;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      puVar18[param_4] = (char)iVar10;
      iVar10 = piVar5[2];
      iVar12 = ((*psVar8 * iVar12 + *(short *)(param_6 + -0x7ce46626) * iVar10) - param_7) + 8 >> 4;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      *puVar17 = (char)iVar12;
      iVar10 = (((int)*(short *)(param_6 + -0x7ce46626) * piVar5[3] + *psVar8 * iVar10) - param_7) +
               8 >> 4;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      puVar18 = puVar18 + iVar2;
      puVar16 = puVar16 + iVar2;
      *puVar16 = (char)iVar10;
      puVar17 = puVar17 + iVar2;
      piVar5 = piVar5 + 4;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    iVar7 = iVar7 + 1;
    pbVar6 = pbVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 < 8);
  return;
}

