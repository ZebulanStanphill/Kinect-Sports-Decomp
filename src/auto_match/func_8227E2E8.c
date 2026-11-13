void fn_8227E2E8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 + 0xc);
  puVar1 = *(unsigned int **)(param_1 + 0x10);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    puVar2 = (unsigned int *)*puVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  *(unsigned int *)(param_1 + 0x38) = 1;
  return;
}

