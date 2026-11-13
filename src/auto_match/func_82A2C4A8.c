void fn_82A2C4A8(int param_1)

{
  unsigned int iVar1;
  int iVar2;
  int *piVar3;
  int lVar4;
  
  do {
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 1;
    *(int *)(param_1 + 0x10) = (int)lVar4;
    if (lVar4 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x48);
      piVar3 = *(int **)(param_1 + 0x4c);
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
    }
    if (*(unsigned int *)(param_1 + 0xc) != 0) {
      *(unsigned int *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
    }
    ExFreePool();
    param_1 = iVar1;
  } while (iVar1 != 0);
  return;
}

