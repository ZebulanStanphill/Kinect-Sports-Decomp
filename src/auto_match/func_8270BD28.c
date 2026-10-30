static unsigned int Get2(unsigned int *a, unsigned int i)
{
  return (a[i >> 4] >> ((i & 15) * 2)) & 3;
}

unsigned int fn_8270BD28(unsigned int *a, unsigned int i)
{
  unsigned int k = i * 2;
  unsigned int v = (a[i >> 4] >> (k & 0x1e)) & 3;
  unsigned int w;
  if (v < 3) {
    return v;
  }
  v = Get2(a, i + 1);
  if (v < 3) {
    return v + 3;
  }
  v = Get2(a, i + 2);
  if (v < 3) {
    w = Get2(a, i + 3);
    return (((v << 2) | w) << 2 | Get2(a, i + 4)) + 6;
  }
  return a[(k + 0x25) >> 5];
}
