unsigned int fn_828D0148(int param_1)
{
  const unsigned int *p;
  unsigned int lo;
  unsigned int hi;

  p = (unsigned int *)(param_1 + 0xa8);
  lo = 0x10000;
  hi = 0x80000;
  if (*p < lo) {
    p = &lo;
  }
  if (hi < *p) {
    p = &hi;
  }
  return *p;
}
