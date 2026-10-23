extern int fn_8269B668(unsigned int *t, int ***k, unsigned int h);

unsigned int fn_8269DB10(unsigned int *t, int ***k)
{
  int i;

  if (*t != 0) {
    i = fn_8269B668(t, k, (unsigned int)(**k)[3] & *(unsigned int *)(*t + 4));
    if (i >= 0) {
      return (i + 1) * 0xc + *t;
    }
  }
  return 0;
}
