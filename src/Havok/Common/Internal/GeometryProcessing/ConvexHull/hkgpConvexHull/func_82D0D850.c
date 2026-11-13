extern int fn_82D18590();


void fn_82D0D850(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;

  puVar1 = *(unsigned int **)(param_1 + 8);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  fn_82D18590(*(unsigned int *)(param_1 + 8),param_2,param_3,0,0);
  return;
}
