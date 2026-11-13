void fn_82F42F10(int param_1,unsigned char *param_2,unsigned int *param_3,__int64 param_4,unsigned int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  int iVar6;
  unsigned char *pbVar7;
  int iVar8;
  unsigned char *puVar9;
  int iVar10;
  int iVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned int *puVar16;
  
  iVar3 = (int)param_4;
  iVar6 = param_5 * 2;
  pbVar4 = param_2 + param_5 * 4;
  iVar11 = iVar3 + -4;
  pbVar5 = param_2 + param_5 * 6;
  *param_3 = (int)(((unsigned int)*param_2 * 0x22 - ((unsigned int)param_2[iVar6] + (unsigned int)param_2[iVar6] * 2)) +
                   (unsigned int)*pbVar4 + 0x10) >> 5;
  param_3[1] = (int)((unsigned int)*param_2 * 0x19 + ((unsigned int)param_2[iVar6] * 8 - (unsigned int)param_2[iVar6]) +
                    0x10) >> 5;
  param_3[2] = (int)(((unsigned int)*param_2 * 2 - (unsigned int)*pbVar4) * 3 + (unsigned int)param_2[iVar6] * 0x1c +
                     (unsigned int)*pbVar5 + 0x10) >> 5;
  uVar15 = (((unsigned int)*pbVar4 * 3 + (unsigned int)param_2[iVar6] * 0xe) - (unsigned int)*param_2) + 8;
  param_3[3] = (int)(uVar15 * 2 | uVar15 >> 0x1f) >> 5;
  if (4 < iVar11) {
    lVar14 = (unsigned __int64)(iVar3 - 9U >> 1) + 1;
    puVar16 = param_3 + 3;
    pbVar12 = param_2 + (param_5 & 0x7fffffff) * -2;
    pbVar13 = param_2 + param_5 * 8 + (param_5 & 0x7fffffff) * -2;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + iVar6;
      pbVar13 = pbVar13 + iVar6;
      puVar16[1] = (int)(((unsigned int)*pbVar7 * 2 - (unsigned int)*pbVar5) * 3 + (unsigned int)*pbVar4 * 0x1c +
                         (unsigned int)*pbVar13 + 0x10) >> 5;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + iVar6;
      pbVar12 = pbVar12 + iVar6;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + iVar6;
      puVar16 = puVar16 + 2;
      *puVar16 = (int)(((unsigned int)bVar2 * 2 - (unsigned int)*pbVar7) * 3 + (unsigned int)bVar1 * 0x1c + (unsigned int)*pbVar12 +
                      0x10) >> 5;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar8 = iVar11 * param_5;
  iVar6 = (iVar3 + -6) * param_5;
  iVar10 = (iVar3 + -2) * param_5;
  uVar15 = (((unsigned int)param_2[iVar6] * 3 + (unsigned int)param_2[iVar8] * 0xe) - (unsigned int)param_2[iVar10]) + 8;
  param_3[iVar11] = (int)(uVar15 * 2 | uVar15 >> 0x1f) >> 5;
  param_3[iVar3 + -3] =
       (int)(((unsigned int)param_2[iVar10] * 2 - (unsigned int)param_2[iVar6]) * 3 +
             (unsigned int)param_2[(iVar3 + -8) * param_5] + (unsigned int)param_2[iVar8] * 0x1c + 0x10) >> 5;
  param_3[iVar3 + -2] =
       (int)((unsigned int)param_2[iVar10] * 0x19 + ((unsigned int)param_2[iVar8] * 8 - (unsigned int)param_2[iVar8]) + 0x10
            ) >> 5;
  param_3[iVar3 + -1] =
       (int)(((unsigned int)param_2[iVar10] * 0x22 - ((unsigned int)param_2[iVar8] + (unsigned int)param_2[iVar8] * 2)) +
             (unsigned int)param_2[iVar6] + 0x10) >> 5;
  if (0 < iVar3) {
    puVar9 = (unsigned char *)(param_1 - param_5);
    do {
      uVar15 = *param_3;
      if (0xff < uVar15) {
        uVar15 = 0xffffffffU - ((int)uVar15 >> 0x1f) & 0xff;
      }
      param_3 = param_3 + 1;
      puVar9 = puVar9 + param_5;
      *puVar9 = (char)uVar15;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

