extern int fn_82B4B048();


void fn_82ACBF60(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  fn_82B4B048(param_2[1]);
  puVar1 = (unsigned int *)param_2[1];
  *puVar1 = *(unsigned int *)(param_1 + 0x3d0);
  *(unsigned int **)(param_1 + 0x3d0) = puVar1;
  *param_2 = *(unsigned int *)(param_1 + 1000);
  *(unsigned int **)(param_1 + 1000) = param_2;
  return;
}

