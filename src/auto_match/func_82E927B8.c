extern int *fn_82E91F20(int *);

void fn_82E927B8(int *param_1)
{
  if (0 < param_1[1]) {
    param_1 = fn_82E91F20(param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  ((float *)param_1)[3] = 0.0f;
  param_1[5] = 0;
  ((float *)param_1)[4] = 0.0f;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
}
