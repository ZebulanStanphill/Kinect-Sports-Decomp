extern int fn_82FEC850(unsigned int size, void *p);

void fn_830490E0(int param_1)
{
  unsigned int n;
  unsigned int m;

  if (*(void **)(param_1 + 0x40) != 0) {
    n = 0;
    for (m = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x24) >> 0xe; m != 0;
        m = m - 1 & m) {
      n = n + 1;
    }
    fn_82FEC850(n << 0xb, *(void **)(param_1 + 0x40));
    *(int *)(param_1 + 0x40) = 0;
  }
}
