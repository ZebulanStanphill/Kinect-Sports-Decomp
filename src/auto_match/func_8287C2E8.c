extern double sqrt(double);
extern double __u64tod();

unsigned char fn_8287C2E8(unsigned __int64 param_1)
{
  double d = __u64tod();
  unsigned __int64 r = (unsigned __int64)(float)sqrt(d);
  return r * r == param_1;
}
