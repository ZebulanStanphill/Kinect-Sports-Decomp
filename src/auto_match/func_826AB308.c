extern int fn_826A9E60(unsigned int *t, int ***k, unsigned int h);

unsigned int fn_826AB308(unsigned int *t, int ***k)
{
  int i;

  if (*t != 0) {
    i = fn_826A9E60(t, k, (unsigned int)(**k)[3] & *(unsigned int *)(*t + 4));
    if (i >= 0) {
      return i * 0x14 + *t + 0xc;
    }
  }
  return 0;
}
