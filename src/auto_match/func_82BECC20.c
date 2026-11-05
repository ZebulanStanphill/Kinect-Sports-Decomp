extern int fn_82BF7630(void *, unsigned *, unsigned *, unsigned **);

unsigned fn_82BECC20(char *o)
{
  unsigned sum;
  unsigned m;
  unsigned n;
  unsigned *item;

  if (*(int *)(o + 0x50) == 2)
    return 0;
  sum = 0;
  m = (*(int *)(o + 0x1c) != 0) ? -1 : 0;
  if (m != 0) {
    do {
      n = 0;
      item = 0;
      fn_82BF7630(o + 0xc, &m, &n, &item);
      if (item != 0 && item[6] != 0)
        sum += item[6];
    } while (m != 0);
  }
  return *(unsigned *)(o + 0x44) + sum;
}
