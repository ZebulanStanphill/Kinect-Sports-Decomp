extern int fn_82EE3630(int, unsigned, int **);

int fn_82EE40D0(int param_1, long long *param_2, long long *param_3)
{
  long long total;
  unsigned short i;
  int *item;

  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xc00d36b6;
  }
  total = 0x2a;
  for (i = 0; i < *(unsigned int *)(param_1 + 0xb0); i++) {
    fn_82EE3630(param_1 + 0x48, i, &item);
    total = total + (*(unsigned int *)(*item + 0x40) & 0x7fffffff) * 2 + 2;
  }
  if (param_2 != 0) {
    *param_2 = total;
  }
  if (param_3 != 0) {
    *param_3 = total;
  }
  *(long long *)(param_1 + 0x20) = total;
  return 0;
}
