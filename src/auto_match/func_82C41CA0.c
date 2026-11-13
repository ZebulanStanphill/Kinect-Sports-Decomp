void fn_82C41CA0(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  unsigned int *param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  int aiStack_1d0 [116];
  
  lVar6 = 0;
  if (0 < param_3) {
    piVar4 = aiStack_1d0;
    do {
      if (param_5 <= (int)lVar6) break;
      *piVar4 = 0;
      if (-1 < (int)lVar6) {
        lVar8 = lVar6 + 1;
        piVar1 = (int *)(param_2 + -4);
        piVar3 = (int *)((int)piVar4 + (param_4 - (int)aiStack_1d0) + 4);
        do {
          piVar3 = piVar3 + -1;
          piVar1 = piVar1 + 1;
          *piVar4 = (int)((__int64)*piVar3 * (__int64)*piVar1 >> 0x1e) + *piVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)lVar6 < param_3);
  }
  uVar5 = param_3 + param_5;
  iVar7 = ((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  if (param_3 < iVar7) {
    piVar4 = aiStack_1d0 + param_3;
    iVar7 = iVar7 - param_3;
    do {
      *piVar4 = 0;
      if (0 < param_3) {
        piVar1 = (int *)(param_2 + -4);
        piVar3 = (int *)((int)piVar4 + (param_4 - (int)aiStack_1d0) + 4);
        iVar9 = param_3;
        do {
          piVar3 = piVar3 + -1;
          piVar1 = piVar1 + 1;
          *piVar4 = (int)((__int64)*piVar3 * (__int64)*piVar1 >> 0x1e) + *piVar4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar7 = iVar7 + -1;
      piVar4 = piVar4 + 1;
    } while (iVar7 != 0);
  }
  uVar5 = uVar5 - 1;
  iVar7 = 0;
  *param_7 = uVar5;
  if (0 < (__int64)((__int64)((int)uVar5 >> 1) + (unsigned __int64)((int)uVar5 < 0 && (uVar5 & 1) != 0)))
  {
    piVar4 = aiStack_1d0;
    do {
      iVar9 = *piVar4;
      *(int *)((param_6 - (int)aiStack_1d0) + (int)piVar4) = iVar9;
      piVar4 = piVar4 + 1;
      iVar2 = *param_7 - iVar7;
      iVar7 = iVar7 + 1;
      *(int *)((iVar2 + -1) * 4 + param_6) = iVar9;
      uVar5 = *param_7;
    } while (iVar7 < (int)(((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0)));
  }
  uVar5 = *param_7;
  iVar7 = ((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  *(int *)(iVar7 * 4 + param_6) = aiStack_1d0[iVar7];
  return;
}

