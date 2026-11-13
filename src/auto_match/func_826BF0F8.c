extern int fn_826AA6A8();

unsigned int *fn_826BF0F8(unsigned int *param_1, unsigned int **param_2, unsigned int **param_3)
{
  int r;
  if (*param_2 != 0) {
    unsigned int n = (*param_2)[1];
    r = fn_826AA6A8(param_2, param_3, n & (*param_3)[3]);
    if (r >= 0) {
      param_1[0] = (unsigned int)param_2;
      param_1[1] = r;
      return param_1;
    }
  }
  r = 0;
  param_1[0] = 0;
  param_1[1] = r;
  return param_1;
}
