extern int fn_826EBA10();


void fn_826EBD80(int *param_1,unsigned short *param_2)

{
  unsigned short *puVar1;
  
  fn_826EBA10(param_1,param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  puVar1 = (unsigned short *)(param_1[1] * 2 + *param_1 + -2);
  if (puVar1 != (unsigned short *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}

