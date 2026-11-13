extern int fn_82B8F208();


int * fn_82AC6468(int *param_1,int param_2,unsigned char param_3)

{
  *param_1 = param_2;
  *(unsigned char *)(param_1 + 6) = param_3;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_82B8F208(param_1,*(unsigned int *)(param_2 + 8));
  return param_1;
}

