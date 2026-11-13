void fn_82685580(int param_1)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar4;
  
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c) - 1;
  *(int *)(param_1 + 0x7c) = (int)lVar3;
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x34) != param_1 + 0x30) {
      piVar4 = (int *)(param_1 + 0x38);
      do {
        piVar1 = *(int **)(param_1 + 0x34);
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)piVar1[1] = *piVar1;
        *piVar1 = *piVar4;
        piVar1[1] = (int)piVar4;
        *(int **)(*piVar4 + 4) = piVar1;
        *piVar4 = (int)piVar1;
      } while (*(int *)(param_1 + 0x34) != param_1 + 0x30);
    }
    *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x78);
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  *(unsigned int *)(param_1 + 0x18) = 0;
  for (; iVar2 != param_1 + 0x38; iVar2 = *(int *)(iVar2 + 4)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}

