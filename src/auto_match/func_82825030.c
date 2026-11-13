int fn_82825030(int param_1,__int64 param_2,__int64 param_3,unsigned char *param_4,unsigned int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int iVar9;
  int *piVar10;
  __int64 lVar11;
  unsigned char *pbVar12;
  int iVar13;
  unsigned int *in_stack_00000054;
  
  while (iVar6 = param_7, uVar8 = iVar6 - param_6, 1 < (int)uVar8) {
    param_7 = ((int)uVar8 >> 1) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 1) != 0) + param_6;
    uVar7 = (unsigned __int64)*(unsigned int *)(param_7 * 4 + param_1);
    uVar2 = param_3 - uVar7;
    if ((int)param_5 <= (int)uVar2) {
      uVar2 = (unsigned __int64)param_5;
    }
    lVar3 = uVar7 + param_2;
    lVar11 = 0;
    if ((uVar2 & 0xffffffff) != 0) {
      iVar1 = (int)lVar3;
      pbVar12 = param_4;
      do {
        lVar11 = (unsigned __int64)*(unsigned char *)lVar3 - (unsigned __int64)*pbVar12;
        if (lVar11 != 0) break;
        lVar3 = lVar3 + 1;
        pbVar12 = pbVar12 + 1;
      } while ((int)lVar3 != iVar1 + (int)uVar2);
    }
    if ((int)lVar11 < 0) {
      param_6 = param_7;
      param_7 = iVar6;
    }
  }
  iVar13 = 0;
  uVar8 = *(unsigned int *)(param_6 * 4 + param_1);
  lVar3 = param_3 - (unsigned __int64)uVar8;
  iVar1 = (int)param_2;
  if (0 < lVar3) {
    do {
      if (((int)param_5 <= iVar13) || (*(unsigned char *)(uVar8 + iVar13 + iVar1) != param_4[iVar13])) break;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)lVar3);
  }
  iVar9 = 0;
  uVar8 = *(unsigned int *)(iVar6 * 4 + param_1);
  lVar3 = param_3 - (unsigned __int64)uVar8;
  if (0 < lVar3) {
    do {
      if (((int)param_5 <= iVar9) || (*(unsigned char *)(uVar8 + iVar9 + iVar1) != param_4[iVar9])) break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)lVar3);
  }
  if (iVar9 < iVar13) {
    iVar6 = param_6;
    iVar9 = iVar13;
  }
  piVar5 = (int *)(iVar6 * 4 + param_1);
  iVar13 = iVar6;
  piVar10 = piVar5;
  if (*piVar5 < param_8) {
    do {
      if (iVar13 < 1) break;
      piVar10 = piVar10 + -1;
      iVar13 = iVar13 + -1;
    } while (*piVar10 < param_8);
    do {
      if ((int)param_3 <= iVar6) break;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (*piVar5 < param_8);
    iVar4 = 0;
    uVar8 = *(unsigned int *)(iVar13 * 4 + param_1);
    lVar3 = param_3 - (unsigned __int64)uVar8;
    if (0 < lVar3) {
      do {
        if (((int)param_5 <= iVar4) || (*(unsigned char *)(uVar8 + iVar4 + iVar1) != param_4[iVar4])) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)lVar3);
    }
    iVar9 = 0;
    uVar8 = *(unsigned int *)(iVar6 * 4 + param_1);
    param_3 = param_3 - (unsigned __int64)uVar8;
    if (0 < param_3) {
      do {
        if (((int)param_5 <= iVar9) || (*(unsigned char *)(uVar8 + iVar9 + iVar1) != param_4[iVar9])) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_3);
    }
    if (iVar9 < iVar4) {
      iVar6 = iVar13;
      iVar9 = iVar4;
    }
  }
  *in_stack_00000054 = *(unsigned int *)(iVar6 * 4 + param_1);
  return iVar9;
}

