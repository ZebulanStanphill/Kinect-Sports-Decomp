extern int fn_826FB298();


void fn_826FD968(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  fn_826FB298(param_1,param_1[3],(unsigned __int64)(unsigned int)param_1[1] + 1);
  puVar1 = (unsigned int *)(param_1[1] * 4 + *param_1 + -4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}

