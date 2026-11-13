extern int fn_82C69500();


void fn_82C5E168(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  fn_82C69500(param_1 + 0xeb0,param_1 + 0xeac);
  puVar1 = *(unsigned int **)(param_1 + 0xeac);
  puVar2 = *(unsigned int **)(param_1 + 0xeb0);
  *(unsigned int *)(param_1 + 0xed8) = *puVar1;
  *(unsigned int *)(param_1 + 0xedc) = puVar1[1];
  *(unsigned int *)(param_1 + 0xee0) = puVar1[2];
  *(unsigned int *)(param_1 + 0xef8) = *puVar2;
  *(unsigned int *)(param_1 + 0xefc) = puVar2[1];
  *(unsigned int *)(param_1 + 0xf00) = puVar2[2];
  return;
}

