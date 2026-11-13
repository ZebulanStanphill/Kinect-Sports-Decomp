void fn_82DFF010(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if (0 < (int)*(unsigned int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + iVar1) + 0x28))();
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + 4;
    } while (uVar2 != 0);
  }
  return;
}

