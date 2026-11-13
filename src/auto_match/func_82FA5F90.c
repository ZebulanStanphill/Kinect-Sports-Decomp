extern void fn_82FA5D50(int heap, int chunk);

void fn_82FA5F90(int heap, int p, unsigned int n)
{
  unsigned int sz = *(unsigned int *)(p + 4) & 0xfffffffc;
  int m;
  int r;
  int x;
  int *y;
  if (sz >= n + 0x10) {
    m = p + n;
    r = m + 4;
    *(unsigned int *)(m + 8) = (sz - n - 4) | (*(unsigned int *)(m + 8) & 3);
    *(unsigned int *)(p + 4) = (*(unsigned int *)(p + 4) & 3) | n;
    x = (*(unsigned int *)(m + 8) & 0xfffffffc) + r;
    y = (int *)(x + 4);
    y[0] = r;
    y[1] = y[1] | 2;
    *(unsigned int *)(m + 8) = *(unsigned int *)(m + 8) | 1;
    *(int *)((*(unsigned int *)(p + 4) & 0xfffffffc) + p + 4) = p;
    *(unsigned int *)(m + 8) = *(unsigned int *)(m + 8) | 2;
    fn_82FA5D50(heap, r);
  }
}
