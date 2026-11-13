extern int fn_8268AF48(const char *s, unsigned int n, int seed);
extern void fn_8268BA10(unsigned int *d, unsigned int *s);

void fn_827A5378(int *param_1, int param_2, unsigned int *param_3)
{
  int h;

  *param_1 = param_2;
  fn_8268BA10((unsigned int *)(param_1 + 1), param_3);
  h = fn_8268AF48((char *)(*param_3 & 0xfffffffc) + 8,
                  *(unsigned int *)(*param_3 & 0xfffffffc) & 0x7fffffff, 0x1505);
  param_1[2] = *param_1 + h;
}
