extern int fn_82A1E7D8();


void fn_8267C950(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  fn_82A1E7D8(*param_2);
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  param_2[2] = 0;
  param_2[1] = uVar1;
  *(unsigned int **)(param_1 + 0x1c) = param_2;
  return;
}

