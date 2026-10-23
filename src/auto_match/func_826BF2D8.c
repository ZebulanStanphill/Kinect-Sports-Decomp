extern int fn_826BE408(unsigned int *t, int ***k, unsigned int h);

unsigned int fn_826BF2D8(unsigned int *t, int ***k)
{
  int i;

  if (*t != 0) {
    i = fn_826BE408(t, k, (unsigned int)(**k)[3] & *(unsigned int *)(*t + 4));
    if (i >= 0) {
      return i * 0x30 + *t + 0x10;
    }
  }
  return 0;
}
