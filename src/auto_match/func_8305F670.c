void fn_8305F670(float *param_1,float *param_2)

{
  if (*param_2 < *param_1) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] < param_1[2]) {
    param_1[2] = param_2[2];
  }
  if (*param_2 > param_1[3]) {
    param_1[3] = *param_2;
  }
  if (param_2[1] > param_1[4]) {
    param_1[4] = param_2[1];
  }
  if (param_2[2] <= param_1[5]) {
    return;
  }
  param_1[5] = param_2[2];
  return;
}

