extern int fn_82EE2D50(unsigned int *, unsigned int, int);

int fn_82EE2EE8(unsigned int *param_1, unsigned int param_2, unsigned int param_3)
{
  if (param_2 < param_1[1] || fn_82EE2D50(param_1, param_2 + 1, -1) != 0) {
    ((unsigned int *)*param_1)[param_2] = param_3;
    return 1;
  }
  return 0;
}
