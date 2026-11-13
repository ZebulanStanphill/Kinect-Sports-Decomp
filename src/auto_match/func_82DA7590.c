typedef struct E_82DA7590 { int a, b, c, d; } E_82DA7590;
typedef unsigned char (*Cmp_82DA7590)(void *, void *);

void fn_82DA7590(E_82DA7590 *base, int lo, int hi, Cmp_82DA7590 cmp)
{
  int i;
  do {
    E_82DA7590 pivot = base[(lo + hi) >> 1];
    int j = hi;
    i = lo;
    do {
      while (cmp(&base[i], &pivot))
        i++;
      while (cmp(&pivot, &base[j]))
        j--;
      if (j < i)
        break;
      if (j != i) {
        E_82DA7590 *x = &base[i];
        E_82DA7590 *y = &base[j];
        E_82DA7590 t = *y;
        *y = *x;
        *x = t;
      }
      j--;
      i++;
    } while (i <= j);
    if (lo < j)
      fn_82DA7590(base, lo, j, cmp);
    if (i >= hi)
      return;
    lo = i;
  } while (1);
}
