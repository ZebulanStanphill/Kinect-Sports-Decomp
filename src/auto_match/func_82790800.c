extern int fn_8268C3E8();


int * fn_82790800(int *param_1,int *param_2)

{
  unsigned int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  *param_1 = *param_2;
  fn_8268C3E8(param_1 + 1,param_2 + 1,param_2[2]);
  fn_8268C3E8(param_1 + 3,param_2 + 3,param_2[4]);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(unsigned char *)(param_1 + 10) = *(unsigned char *)(param_2 + 10);
  return param_1;
}

