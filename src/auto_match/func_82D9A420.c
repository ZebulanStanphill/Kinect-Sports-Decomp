void fn_82D9A420(int param_1,int param_2)

{
  int iVar1;
  int iVar3;
  __int64 lVar2;
  int *piVar4;
  unsigned int *puVar5;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    piVar4 = *(int **)(param_1 + 0x8c);
    do {
      if (*piVar4 == param_2) goto LAB_82d9a454;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x90));
  }
  iVar1 = -1;
LAB_82d9a454:
  iVar3 = *(int *)(param_1 + 0x90) + -1;
  puVar5 = (unsigned int *)(iVar1 * 4 + *(int *)(param_1 + 0x8c));
  *(int *)(param_1 + 0x90) = iVar3;
  iVar1 = (iVar3 - iVar1) * 4;
  if (iVar1 < 1) {
    return;
  }
  lVar2 = (unsigned __int64)(iVar1 - 1U >> 2) + 1;
  do {
    *puVar5 = puVar5[1];
    puVar5 = puVar5 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

