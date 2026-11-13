void fn_82D3BAE0(unsigned int *param_1,int param_2)

{
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  *(unsigned short *)(param_1 + 8) = 0;
  *(unsigned short *)((int)param_1 + 0x22) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 1;
  param_1[4] = 0;
  return;
}

