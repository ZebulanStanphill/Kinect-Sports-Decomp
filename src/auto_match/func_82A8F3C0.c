extern int fn_82A8B5F8(void *, unsigned int, unsigned int, unsigned int);
extern int fn_82A8F178(void *, void *);

int fn_82A8F3C0(int param_1)
{
  unsigned int a;
  unsigned int b;
  unsigned int n;
  unsigned int st40[4];
  unsigned char st30[32];

  a = *(unsigned int *)(param_1 + 0x5988);
  b = (*(int *)(param_1 + 0x5924) * *(int *)(param_1 + 0x591c) + 0x187 >> 3) +
      *(unsigned int *)(param_1 + 0x5984);
  n = a;
  if (a >= b) {
    n = b;
  }
  fn_82A8B5F8(st30, *(unsigned int *)(param_1 + 0x598c), a, n);
  st40[0] = 0;
  return fn_82A8F178(st40, st30) + n;
}
