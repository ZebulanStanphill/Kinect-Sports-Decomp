extern int fn_82695DA0();


int * fn_826F5B00(int *param_1,int *param_2,unsigned __int64 param_3,unsigned char param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_82695DA0(param_1 + 2,param_3);
  *(unsigned char *)(param_1 + 7) = param_4;
  param_1[6] = 0;
  return param_1;
}

