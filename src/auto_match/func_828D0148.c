typedef unsigned int uint;

uint fn_828D0148(int param_1)
{
  const uint *p;
  uint lo;
  uint hi;

  p = (uint *)(param_1 + 0xa8);
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
