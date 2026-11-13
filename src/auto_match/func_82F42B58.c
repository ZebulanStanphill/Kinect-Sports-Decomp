void fn_82F42B58(int param_1,unsigned char *param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  
  iVar9 = 2;
  *param_3 = (int)(((unsigned int)*param_2 * 0xf + (unsigned int)param_2[1] * 0xe + (unsigned int)param_2[2]) * 5 +
                   ((unsigned int)param_2[3] + (unsigned int)param_2[1]) * -0xb + 0x40) >> 7;
  if (2 < (int)(param_4 - 2)) {
    lVar8 = (unsigned __int64)(param_4 - 5 >> 1) + 1;
    puVar7 = param_3;
    do {
      pbVar1 = param_2 + iVar9;
      iVar2 = iVar9 + 1;
      iVar5 = iVar9 + -1;
      iVar3 = iVar9 + 2;
      iVar6 = iVar9 + -2;
      iVar4 = iVar9 + 3;
      iVar9 = iVar9 + 2;
      puVar7 = puVar7 + 2;
      *puVar7 = (int)((((unsigned int)param_2[iVar2] + (unsigned int)*pbVar1) * 0xe + (unsigned int)param_2[iVar5] +
                      (unsigned int)param_2[iVar3]) * 5 +
                      ((unsigned int)param_2[iVar6] + (unsigned int)param_2[iVar4]) * -0xb + 0x40) >> 7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar9 = 0;
  param_3[param_4 - 2] =
       (int)(((unsigned int)param_2[param_4 - 1] * 0xf + (unsigned int)param_2[param_4 - 2] * 0xe +
             (unsigned int)param_2[param_4 - 3]) * 5 +
             ((unsigned int)param_2[param_4 - 4] + (unsigned int)param_2[param_4 - 2]) * -0xb + 0x40) >> 7;
  if (0 < (int)param_4) {
    lVar8 = (((unsigned __int64)param_4 - 1 & 0xffffffff) >> 1) + 1;
    do {
      uVar10 = *param_3;
      if (0xff < uVar10) {
        uVar10 = 0xffffffffU - ((int)uVar10 >> 0x1f) & 0xff;
      }
      *(unsigned char *)(param_1 + 1 + iVar9) = 0;
      param_3 = param_3 + 2;
      *(char *)(iVar9 + param_1) = (char)uVar10;
      iVar9 = iVar9 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

