int fn_82563CD0(const float *lo, const float *hi, const float *p)
{
  if (p[0] >= lo[0] && p[0] < hi[0] &&
      p[1] >= lo[1] && p[1] < hi[1] &&
      p[2] >= lo[2] && p[2] < hi[2]) {
    return 1;
  }
  return 0;
}
