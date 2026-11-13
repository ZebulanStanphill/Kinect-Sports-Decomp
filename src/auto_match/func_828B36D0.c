void fn_828B36D0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar3;
  unsigned int lVar2;
  
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    uVar3 = (*(unsigned int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1;
    if (*(unsigned int *)(param_1 + 8) <= uVar3) {
      uVar3 = uVar3 - *(unsigned int *)(param_1 + 8);
    }
    puVar1 = *(unsigned int **)(uVar3 * 4 + *(int *)(param_1 + 4));
    (*(int (**)())*puVar1)(puVar1,0);
    lVar2 = *(unsigned int *)(param_1 + 0x10) - 1;
    *(unsigned int *)(param_1 + 0x10) = (int)lVar2;
    if (lVar2 == 0) {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

