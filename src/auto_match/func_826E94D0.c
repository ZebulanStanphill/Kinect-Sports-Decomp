extern int fn_826CBDA0();


void fn_826E94D0(int *param_1,unsigned char *param_2)

{
  unsigned char *puVar1;
  
  fn_826CBDA0(param_1,param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  puVar1 = (unsigned char *)(*param_1 + param_1[1] + -1);
  if (puVar1 != (unsigned char *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}

