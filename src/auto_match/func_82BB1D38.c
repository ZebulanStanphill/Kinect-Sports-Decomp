void fn_82BB1D38(int param_1)
{
  unsigned int i;
  int n;
  int m;

  *(int *)(param_1 + 0x820) = -1;
  n = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 4);
  for (i = 0; (int)i < n; i++) {
    if ((int)(*(unsigned int *)(((i >> 5) + 2) * 4 + *(int *)(param_1 + 0x858)) >> (i & 0x1f) & 1) <= 0) {
      m = *(int *)(param_1 + 0x820);
      if ((int)i > m) {
        m = i;
      }
      *(int *)(param_1 + 0x820) = m;
    }
  }
}
