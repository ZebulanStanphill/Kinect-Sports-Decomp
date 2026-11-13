__int64 fn_82372F88(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  int aiStack_20 [6];
  
  iVar10 = *(int *)(param_1 + 0x260);
  piVar3 = *(int **)**(int **)(param_1 + 8);
  piVar4 = (int *)((int *)**(int **)(param_1 + 8))[1];
  uVar1 = (unsigned int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar2 = (unsigned int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  uVar9 = (unsigned __int64)uVar1;
  uVar8 = (unsigned __int64)uVar2;
  if (*(int *)(param_1 + 0x204) == 0) {
    uVar5 = *(unsigned int *)(iVar10 + 0x148);
    uVar6 = *(unsigned int *)(iVar10 + 0x14c);
    aiStack_20[0] = (((int)uVar1 >> 0x1f) - ((int)uVar5 >> 0x1f)) + (unsigned int)(uVar5 <= uVar9);
    aiStack_20[1] = (((int)uVar2 >> 0x1f) - ((int)uVar5 >> 0x1f)) + (unsigned int)(uVar5 <= uVar8);
    aiStack_20[2] =
         (((int)(uVar9 - uVar8) >> 0x1f) - ((int)uVar6 >> 0x1f)) +
         (unsigned int)((unsigned __int64)uVar6 <= uVar9 - uVar8);
    aiStack_20[3] =
         (((int)(uVar8 - uVar9) >> 0x1f) - ((int)uVar6 >> 0x1f)) +
         (unsigned int)((unsigned __int64)uVar6 <= uVar8 - uVar9);
    if (((int)uVar1 < *(int *)(iVar10 + 0x150)) && ((int)uVar2 < *(int *)(iVar10 + 0x150))) {
      lVar7 = 0;
      iVar10 = 0;
      do {
        if ((*(int *)((int)aiStack_20 + iVar10) != 0) &&
           (*(int *)((int)aiStack_20 + iVar10 + 8) != 0)) {
          return lVar7;
        }
        iVar10 = iVar10 + 4;
        lVar7 = lVar7 + 1;
      } while (iVar10 < 8);
      lVar7 = -1;
    }
    else {
      lVar7 = (unsigned __int64)(uVar1 >> 0x1f) + (__int64)((int)uVar2 >> 0x1f) +
              (unsigned __int64)(uVar9 <= uVar8);
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}

