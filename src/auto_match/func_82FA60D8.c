extern void fn_82FA5D50(int heap, int chunk);

int fn_82FA60D8(int heap, int p, int n)
{
  unsigned int sz = *(unsigned int *)(p + 4) & 0xfffffffc;
  unsigned int n4;
  int m;
  int r;
  int x;
  int *y;
  if (sz >= n + 0x10U) {
    n4 = n - 4;
    m = n4 + p;
    r = m + 4;
    *(unsigned int *)(m + 8) = (sz - n4 - 4) | (*(unsigned int *)(m + 8) & 3);
    *(unsigned int *)(p + 4) = (*(unsigned int *)(p + 4) & 3) | n4;
    x = (*(unsigned int *)(m + 8) & 0xfffffffc) + r;
    y = (int *)(x + 4);
    y[0] = r;
    y[1] = y[1] | 2;
    *(unsigned int *)(m + 8) = *(unsigned int *)(m + 8) | 3;
    *(int *)((*(unsigned int *)(p + 4) & 0xfffffffc) + p + 4) = p;
    fn_82FA5D50(heap, p);
    return r;
  }
  return p;
}
