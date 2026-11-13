void fn_822F8E58(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  if (((float)param_1[1] < (float)param_2[1]) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
    uVar1 = param_2[1];
    param_2[1] = param_1[1];
    param_1[1] = uVar1;
  }
  if (((float)param_2[1] < (float)param_3[1]) && (param_3 != param_2)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    uVar1 = param_3[1];
    param_3[1] = param_2[1];
    param_2[1] = uVar1;
  }
  if ((float)param_2[1] <= (float)param_1[1]) {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  uVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_2[1] = param_1[1];
  param_1[1] = uVar1;
  return;
}

