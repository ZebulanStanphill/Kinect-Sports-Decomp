void fn_82BEEBC0(float *o, float *a, float *b)
{
  float b2 = b[2];
  float a1 = a[1];
  float b1 = b[1];
  float a2 = a[2];
  float b0 = b[0];
  float a0 = a[0];
  float x = a1 * b2 - a2 * b1;
  float z = a0 * b1 - b0 * a1;
  float y = b0 * a2 - a0 * b2;
  o[0] = x;
  o[2] = z;
  o[1] = y;
}
