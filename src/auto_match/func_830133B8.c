static __forceinline int notNull(int *p)
{
  if (p) {
    return 1;
  }
  return 0;
}

void fn_830133B8(int *param_1)
{
  int *p;

  while (notNull(p = (int *)*param_1)) {
    *param_1 = *p;
    if (p == (int *)param_1[1]) {
      param_1[1] = 0;
    }
    *p = param_1[2];
    param_1[2] = (int)p;
    param_1[5] = param_1[5] - 1;
  }
}
