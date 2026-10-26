extern void fn_82691000(void *p);

unsigned int *fn_8270AA18(unsigned int *param_1, unsigned int param_2)
{
  *param_1 = param_2;
  param_1[1] = (1 << param_2) - 1;
  fn_82691000(param_1 + 2);
  return param_1;
}
