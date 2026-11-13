void fn_82D93440(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x7c) <= 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x78);
  do {
    if (*piVar1 == param_2) {
      *(unsigned __int64 *)(*(int **)(param_1 + 0x78) + iVar2 * 4 + 2) = param_3;
      return;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (iVar2 < *(int *)(param_1 + 0x7c));
  return;
}

