extern void fn_82B68FC8(float *, float *, float *, float *);
extern void fn_82B68D70(float *, float *, float *, float *);
extern void fn_82B69290(float *, float *, float *, float *);
extern void fn_82B68CF0(float *, float *);

void fn_82AAAD30(int n, int off, float **tab, int fC, int fB)
{
  int count = n / 16;
  float *a = tab[16] + off;
  float *b = tab[20] + off;
  float *c = tab[24] + off;
  float *d = tab[28] + off;
  float *p0 = tab[8] + off;
  float *p1 = tab[12] + off;
  int i;
  fn_82B68FC8(a, b, c, d);
  if (fB != 0) fn_82B68D70(p0, p1, a, b);
  count = count - 1;
  p0 += 8;
  p1 += 8;
  a += 16;
  b += 16;
  c += 16;
  d += 16;
  i = 0;
  if (count > 0) {
    do {
      fn_82B68FC8(a, b, c, d);
      if (fB != 0) fn_82B69290(p0, p1, a - 8, b - 8);
      if (fC != 0 && fB != 0) fn_82B68CF0(c - 8, d - 8);
      i++;
      a += 16;
      b += 16;
      c += 16;
      d += 16;
      p0 += 16;
      p1 += 16;
    } while (i < count);
  }
  if (fB != 0) fn_82B68D70(p0, p1, a - 8, b - 8);
}
