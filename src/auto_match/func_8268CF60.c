/* p = m * p for 2x3 affine matrices stored as two rows of three floats. */
void fn_8268CF60(float *p, float *m)
{
  float a = p[0];
  float b = p[1];
  float c = p[2];
  float d = p[3];
  float e = p[4];
  float f = p[5];
  p[0] = m[0] * a + m[1] * d;
  p[3] = m[3] * a + m[4] * d;
  p[1] = m[0] * b + m[1] * e;
  p[4] = m[3] * b + m[4] * e;
  p[2] = m[0] * c + m[1] * f + m[2];
  p[5] = m[3] * c + m[4] * f + m[5];
}
