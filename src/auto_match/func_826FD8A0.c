extern int fn_826FB228();


void fn_826FD8A0(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  fn_826FB228(param_1,param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  puVar1 = (unsigned int *)(param_1[1] * 4 + *param_1 + -4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}

