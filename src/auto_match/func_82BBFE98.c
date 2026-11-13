void fn_82BBFE98(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 8);
  while (puVar2 != (unsigned int *)(param_1 + 0xc)) {
    puVar1 = (unsigned int *)puVar2[2];
    (*(int (**)())*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  *(unsigned int **)(param_1 + 8) = (unsigned int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = param_1;
  return;
}

