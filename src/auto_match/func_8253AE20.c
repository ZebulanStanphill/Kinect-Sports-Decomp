extern const float lbl_821CA45C[2];

int fn_8253AE20(float *a, float *b, float *c, float *d, float *out)
{
  float dz1 = b[2] - a[2];
  float dx1 = a[0] - b[0];
  float c1 = b[0] * a[2] - a[0] * b[2];
  float dz2 = d[2] - c[2];
  float dx2 = c[0] - d[0];
  float c2 = d[0] * c[2] - c[0] * d[2];
  float det = dx2 * dz1 - dz2 * dx1;
  float inv;
  if (det == 0.0f)
    return 0;
  inv = lbl_821CA45C[1] / det;
  out[2] = (dz2 * c1 - c2 * dz1) * inv;
  out[0] = (c2 * dx1 - dx2 * c1) * inv;
  return 1;
}
