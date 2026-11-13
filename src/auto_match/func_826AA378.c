extern int fn_826A9B58();


void fn_826AA378(int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  fn_826A9B58(param_1,param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  iVar1 = param_1[1] * 8 + *param_1;
  *(unsigned int *)(iVar1 + -8) = *param_2;
  *(unsigned int *)(iVar1 + -4) = param_2[1];
  return;
}

