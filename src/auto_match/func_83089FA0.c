typedef struct E_83089FA0 { int a, b; } E_83089FA0;
typedef unsigned char (*Cmp_83089FA0)(void *, void *);

void fn_83089FA0(E_83089FA0 *base, int lo, int hi, Cmp_83089FA0 cmp)
{
  int i;
  do {
    unsigned __int64 pivot = *(unsigned __int64 *)&base[(lo + hi) >> 1];
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
        E_83089FA0 *x = &base[i];
        E_83089FA0 *y = &base[j];
        unsigned __int64 t = *(unsigned __int64 *)y;
        y->a = x->a;
        y->b = x->b;
        *(unsigned __int64 *)x = t;
      }
      j--;
      i++;
    } while (i <= j);
    if (lo < j)
      fn_83089FA0(base, lo, j, cmp);
    if (i >= hi)
      return;
    lo = i;
  } while (1);
}
