void fn_82CA8848(unsigned char *param_1,unsigned char *param_2,int *param_3,int param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  int *piVar4;
  int *piVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  int *piVar10;
  
  pbVar9 = param_2;
  if (1 < param_4 + -1) {
    piVar10 = param_3 + -1;
    lVar6 = (unsigned __int64)(param_4 - 3U >> 1) + 1;
    do {
      bVar1 = *pbVar9;
      pbVar2 = pbVar9 + param_5 * 2;
      pbVar3 = pbVar9 + param_5;
      pbVar9 = pbVar9 + param_5 * 2;
      piVar10 = piVar10 + 2;
      *piVar10 = ((int)(((unsigned int)*pbVar2 + (unsigned int)bVar1) * -0x196) >> 4) + (unsigned int)*pbVar3 * 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_3[param_4 + -1] = (unsigned int)pbVar9[param_5] * 0x10 + ((int)((unsigned int)*pbVar9 * -0x196) >> 3);
  *param_3 = (param_3[1] * -0xd9 >> 10) + (unsigned int)*param_2 * 0x20;
  if (2 < param_4) {
    lVar6 = (unsigned __int64)(param_4 - 3U >> 1) + 1;
    piVar10 = param_3;
    do {
      piVar4 = piVar10 + 3;
      piVar5 = piVar10 + 1;
      param_2 = param_2 + param_5 * 2;
      piVar10 = piVar10 + 2;
      *piVar10 = ((*piVar4 + *piVar5) * -0xd9 >> 0xb) + (unsigned int)*param_2 * 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (1 < param_4 + -1) {
    lVar6 = (unsigned __int64)(param_4 - 3U >> 1) + 1;
    piVar10 = param_3 + 1;
    do {
      *piVar10 = ((piVar10[-1] + piVar10[1]) * 0xe2 >> 9) + *piVar10;
      piVar10 = piVar10 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_3[param_4 + -1] = (param_3[param_4 + -2] * 0xe2 >> 8) + param_3[param_4 + -1];
  iVar7 = param_3[1];
  if (0 < param_4) {
    param_3 = param_3 + -1;
    lVar6 = (unsigned __int64)(param_4 - 1U >> 1) + 1;
    do {
      iVar7 = (((param_3[2] + iVar7) * 0xe3 >> 8) + param_3[1] + 0x14) * 0x1a;
      uVar8 = iVar7 >> 10;
      if (0xff < uVar8) {
        uVar8 = 0xffffffffU - (iVar7 >> 0x1f) & 0xff;
      }
      *param_1 = (char)uVar8;
      param_1[param_5] = 0;
      param_1 = param_1 + param_5 * 2;
      param_3 = param_3 + 2;
      iVar7 = *param_3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

