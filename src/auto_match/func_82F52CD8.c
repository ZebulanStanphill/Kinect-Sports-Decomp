void fn_82F52CD8(int param_1)

{
  unsigned int iVar2;
  int *piVar3;
  unsigned int uVar1;
  unsigned int uVar4;
  
  uVar4 = 0;
  iVar2 = (*(int (**)())(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8));
  if (iVar2 != 0) {
    do {
      piVar3 = (int *)(*(int (**)())(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),uVar4);
      if (piVar3 != (int *)0x0) {
        (*(int (**)())(*piVar3 + 0x24))();
      }
      uVar4 = uVar4 + 1;
      uVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8));
    } while (uVar4 < uVar1);
  }
  return;
}

