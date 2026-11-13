unsigned int * fn_82686228(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  if (param_2 != (int *)0x0) {
    (*(int (**)())(*param_2 + 4))(param_2,param_3);
  }
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  return param_1;
}

