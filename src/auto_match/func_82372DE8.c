extern int fn_82372F88();


unsigned __int64 fn_82372DE8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  __int64 lVar5;
  int iVar6;
  
  piVar3 = *(int **)(param_2 * 4 + **(int **)(param_1 + 8));
  piVar4 = *(int **)(((unsigned int)LZCOUNT(param_2) >> 3 & 4) + **(int **)(param_1 + 8));
  uVar1 = (unsigned int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar2 = (unsigned int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  if (*(int *)(param_1 + 0x204) == 0) {
    lVar5 = fn_82372F88();
    iVar6 = (int)(lVar5 + 1) - ((int)lVar5 + (unsigned int)(lVar5 + 1 == 0));
  }
  else {
    iVar6 = *(int *)(param_1 + 0x658);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x260);
    if (uVar1 == *(int *)(iVar6 + 0x150) - 1U) {
      return 1;
    }
    if (((uVar2 < uVar1) && (*(int *)(iVar6 + 0x148) - 1U <= uVar1)) &&
       (*(int *)(iVar6 + 0x14c) - 1U <= uVar1 - uVar2)) {
      return 1;
    }
  }
  return 0;
}

