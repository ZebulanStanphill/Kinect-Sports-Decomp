void fn_82490070(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int uVar7;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (iVar1 < 0x29) {
    iVar1 = *param_2;
    if (iVar1 < *param_1) {
      *param_2 = *param_1;
      *param_1 = iVar1;
    }
    iVar1 = *param_3;
    if (iVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (*param_1 <= iVar1) {
      return;
    }
    *param_2 = *param_1;
    *param_1 = iVar1;
    return;
  }
  uVar7 = iVar1 + 1;
  uVar5 = (__int64)((int)uVar7 >> 3) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0);
  iVar2 = (int)((uVar5 & 0x3fffffff) << 2);
  iVar1 = *(int *)(iVar2 + (int)param_1);
  if (iVar1 < *param_1) {
    *(int *)(iVar2 + (int)param_1) = *param_1;
    *param_1 = iVar1;
  }
  iVar3 = (int)((uVar5 & 0x1fffffff) << 3);
  iVar1 = *(int *)(iVar3 + (int)param_1);
  if (iVar1 < *(int *)(iVar2 + (int)param_1)) {
    *(int *)(iVar3 + (int)param_1) = *(int *)(iVar2 + (int)param_1);
    *(int *)(iVar2 + (int)param_1) = iVar1;
  }
  iVar1 = *(int *)(iVar2 + (int)param_1);
  if (iVar1 < *param_1) {
    *(int *)(iVar2 + (int)param_1) = *param_1;
    *param_1 = iVar1;
  }
  piVar4 = (int *)((int)param_2 - iVar2);
  iVar1 = *param_2;
  if (iVar1 < *piVar4) {
    *param_2 = *piVar4;
    *piVar4 = iVar1;
  }
  iVar1 = *(int *)(iVar2 + (int)param_2);
  if (iVar1 < *param_2) {
    *(int *)(iVar2 + (int)param_2) = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if (iVar1 < *piVar4) {
    *param_2 = *piVar4;
    *piVar4 = iVar1;
  }
  piVar6 = (int *)((int)param_3 - iVar2);
  piVar4 = (int *)((int)param_3 - iVar3);
  iVar1 = *piVar6;
  if (iVar1 < *piVar4) {
    *piVar6 = *piVar4;
    *piVar4 = iVar1;
  }
  iVar1 = *param_3;
  if (iVar1 < *piVar6) {
    *param_3 = *piVar6;
    *piVar6 = iVar1;
  }
  iVar1 = *piVar6;
  if (iVar1 < *piVar4) {
    *piVar6 = *piVar4;
    *piVar4 = iVar1;
  }
  iVar1 = *param_2;
  if (iVar1 < *(int *)(iVar2 + (int)param_1)) {
    *param_2 = *(int *)(iVar2 + (int)param_1);
    *(int *)(iVar2 + (int)param_1) = iVar1;
  }
  iVar1 = *piVar6;
  if (iVar1 < *param_2) {
    *piVar6 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if (*(int *)(iVar2 + (int)param_1) <= iVar1) {
    return;
  }
  *param_2 = *(int *)(iVar2 + (int)param_1);
  *(int *)(iVar2 + (int)param_1) = iVar1;
  return;
}

