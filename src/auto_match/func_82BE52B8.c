unsigned __int64 fn_82BE52B8(unsigned int *param_1,unsigned int *param_2)

{
  if (param_2 == (unsigned int *)0x0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((*param_1 == 0) || ((unsigned int *)param_1[1] == (unsigned int *)0x0)) {
    *param_1 = (int)param_2;
  }
  else {
    *(unsigned int *)param_1[1] = param_2;
    param_2[1] = param_1[1];
  }
  param_1[1] = (int)param_2;
  param_1[2] = (int)param_2;
  param_1[3] = param_1[3] + 1;
  return 1;
}

