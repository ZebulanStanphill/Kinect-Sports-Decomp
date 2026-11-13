int fn_82D00060(int *param_1,int param_2)
{
  int *p;
  param_2 = param_2 + 1;
  if (param_2 > param_1[2]) {
    return param_2;
  }
  p = (int *)(param_2 * 4 + *param_1);
  do {
    if (*p != -1) {
      return param_2;
    }
    param_2 = param_2 + 1;
    p = p + 1;
  } while (param_2 <= param_1[2]);
  return param_2;
}
