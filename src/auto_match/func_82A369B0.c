void fn_82A369B0(unsigned int *param_1,unsigned int *param_2)

{
  if (param_2 == (unsigned int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_1[1] == 0) {
    param_1[1] = 0x20000;
  }
  if (param_1[2] != 0) {
    return;
  }
  param_1[2] = 0x80000;
  return;
}

