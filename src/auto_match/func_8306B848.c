extern double fn_82809558(double);
double fn_8306B848(float *a, float *b)
{
  float d0 = a[0] - b[0];
  float d1 = a[1] - b[1];
  float d2 = a[2] - b[2];
  float d3 = a[3] - b[3];
  return fn_82809558(d2 * d2 + d3 * d3 + d1 * d1 + d0 * d0);
}
