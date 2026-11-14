static __forceinline unsigned char IsNormalOrZero(float x)
{
  unsigned int bits = *(unsigned int *)&x;
  return (bits & 0x7fffffff) == 0 || (bits & 0x7f800000) != 0;
}
float fn_82B453A0(float x)
{
  if (IsNormalOrZero(x)) {
    return x;
  }
  *(unsigned int *)&x &= 0x80000000;
  return x;
}
