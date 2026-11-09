extern void fn_828102A8(float a, float *out);

float *fn_83066F50(float *p, float x, float y, float z, float w)
{
  p[0] = x;
  p[1] = y;
  p[2] = z;
  fn_828102A8(-w, p + 3);
  return p;
}
