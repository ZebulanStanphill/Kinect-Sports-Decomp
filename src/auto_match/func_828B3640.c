void fn_828B3640(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar3;
  int lVar2;
  
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
    (*(int (**)())*puVar1)(puVar1,0);
    uVar3 = *(int *)(param_1 + 0xc) + 1;
    *(unsigned int *)(param_1 + 0xc) = uVar3;
    if (*(unsigned int *)(param_1 + 8) <= uVar3) {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
    lVar2 = *(int *)(param_1 + 0x10) - 1;
    *(int *)(param_1 + 0x10) = (int)lVar2;
    if (lVar2 == 0) {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

