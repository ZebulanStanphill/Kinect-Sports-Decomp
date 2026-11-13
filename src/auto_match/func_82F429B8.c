void fn_82F429B8(unsigned char *param_1,unsigned char *param_2,unsigned int *param_3,int param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  int iVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  
  iVar3 = param_5 * 2;
  iVar8 = param_4 + -2;
  *param_3 = (int)(((unsigned int)*param_2 * 0xf + (unsigned int)param_2[param_5] * 0xe + (unsigned int)param_2[iVar3]) * 5
                   + ((unsigned int)param_2[param_5 * 3] + (unsigned int)param_2[param_5]) * -0xb + 0x3f) >> 7;
  if (2 < iVar8) {
    lVar4 = (unsigned __int64)(param_4 - 5U >> 1) + 1;
    pbVar10 = param_2 + param_5 * 3;
    pbVar11 = param_2 + param_5 * 2;
    puVar9 = param_3;
    pbVar5 = param_2;
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + iVar3;
      pbVar2 = pbVar5 + param_5;
      pbVar11 = pbVar11 + iVar3;
      pbVar10 = pbVar10 + iVar3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + iVar3;
      puVar9 = puVar9 + 2;
      *puVar9 = (int)((((unsigned int)pbVar7[param_5] + (unsigned int)*pbVar7) * 0xe + (unsigned int)*pbVar2 +
                      (unsigned int)*pbVar11) * 5 + ((unsigned int)*pbVar10 + (unsigned int)bVar1) * -0xb + 0x3f) >> 7;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  param_3[iVar8] =
       (int)(((unsigned int)param_2[(param_4 + -3) * param_5] +
             (unsigned int)param_2[(param_4 + -1) * param_5] * 0xf + (unsigned int)param_2[iVar8 * param_5] * 0xe) *
             5 + ((unsigned int)param_2[(param_4 + -4) * param_5] + (unsigned int)param_2[iVar8 * param_5]) * -0xb +
            0x3f) >> 7;
  if (0 < param_4) {
    lVar4 = (unsigned __int64)(param_4 - 1U >> 1) + 1;
    do {
      uVar6 = *param_3;
      if (0xff < uVar6) {
        uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & 0xff;
      }
      *param_1 = (char)uVar6;
      param_3 = param_3 + 2;
      param_1[param_5] = 0;
      param_1 = param_1 + iVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

