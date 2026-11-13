extern int _blkmov(int, int, int);

int fn_82A6A338(int base, int n, int bits, int index)
{
  int pad = (4 - n) * 8;
  int shift = n * 8 - bits;
  int m = n * index;
  int value = 0;
  int src = m + base;
  if (0 < n) {
    _blkmov((int)&value + ((src - m) - base), src, n);
  }
  value >>= shift + pad; return value;
}
