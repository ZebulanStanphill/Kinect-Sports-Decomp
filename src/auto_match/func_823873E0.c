static int base(unsigned int t)
{
  int r = 0;
  switch (t) {
  case 0: r = 0; break;
  case 1: r = 0x4b; break;
  case 2: r = 0x19; break;
  case 3: r = 0x32; break;
  }
  return r;
}
void fn_823873E0(int param_1, int param_2, int param_3, int param_4)
{
  unsigned int t;
  unsigned int lo, hi, k;
  int n;
  t = *(unsigned int *)(param_1 + 0x224);
  n = 0;
  lo = base(t) + 0x2e2;
  hi = base(t) + 0x2fa;
  for (k = lo; k <= hi; k++) {
    *(int *)(((param_3 * 2 + param_4) * 0x22 + n + 1) * 4 + param_1) = *(int *)(*(int *)(param_2 + 0x100) + k * 4);
    n++;
  }
  param_1 = (param_3 * 2 + param_4) * 0x88 + param_1;
  *(int *)(param_1 + 0x6c) = *(int *)(*(int *)(param_2 + 0x100) + 0xb50);
  *(int *)(param_1 + 0x7c) = *(int *)(*(int *)(param_2 + 0x100) + 0xb54);
  *(int *)(param_1 + 0x80) = *(int *)(*(int *)(param_2 + 0x100) + 0xb58);
  *(int *)(param_1 + 0x74) = *(int *)(*(int *)(param_2 + 0x100) + 0xb5c);
  *(int *)(param_1 + 0x70) = *(int *)(*(int *)(param_2 + 0x100) + 0xb60);
  *(int *)(param_1 + 0x84) = *(int *)(*(int *)(param_2 + 0x100) + 0xb64);
  *(int *)(param_1 + 0x88) = *(int *)(*(int *)(param_2 + 0x100) + 0xb68);
  *(int *)(param_1 + 0x70) = *(int *)(*(int *)(param_2 + 0x100) + 0xb6c);
}
