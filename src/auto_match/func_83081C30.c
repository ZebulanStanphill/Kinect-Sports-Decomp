void fn_83081C30(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2 * 4;
  iVar5 = *(int *)*param_1;
  iVar1 = *(int *)(iVar6 + iVar5);
  iVar2 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 * 4 + iVar5);
    } while (-1 < iVar2);
    while (-1 < iVar1) {
      iVar2 = param_2 * 4;
      param_2 = *(int *)(iVar2 + iVar5);
      *(int *)(iVar2 + iVar5) = iVar3;
      iVar6 = param_2 * 4;
      iVar5 = *(int *)*param_1;
      iVar1 = *(int *)(iVar6 + iVar5);
    }
  }
  iVar3 = param_3 * 4;
  iVar1 = *(int *)(iVar3 + iVar5);
  iVar2 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 * 4 + iVar5);
    } while (-1 < iVar2);
    while (-1 < iVar1) {
      iVar2 = param_3 * 4;
      param_3 = *(int *)(iVar2 + iVar5);
      *(int *)(iVar2 + iVar5) = iVar4;
      iVar3 = param_3 * 4;
      iVar5 = *(int *)*param_1;
      iVar1 = *(int *)(iVar3 + iVar5);
    }
  }
  if (param_2 != param_3) {
    if (param_2 < param_3) {
      *(int *)(iVar6 + iVar5) = *(int *)(iVar3 + iVar5) + *(int *)(iVar6 + iVar5);
      *(int *)(*(int *)*param_1 + iVar3) = param_2;
      return;
    }
    *(int *)(iVar3 + iVar5) = *(int *)(iVar6 + iVar5) + *(int *)(iVar3 + iVar5);
    *(int *)(*(int *)*param_1 + iVar6) = param_3;
  }
  return;
}

