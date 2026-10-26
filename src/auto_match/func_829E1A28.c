extern int fn_82A2A108(void *a, void *b, unsigned int c, unsigned int *d, int e);

int fn_829E1A28(void *param_1, void *param_2, unsigned int param_3)
{
  unsigned int v;
  if (fn_82A2A108(param_1, param_2, param_3, &v, 0) != 0 && v == param_3) {
    return 0;
  }
  return 0x80004005;
}
