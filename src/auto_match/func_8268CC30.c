/* out = a + (b - a) * t for 2x3 affine matrices (two rows of three floats). */
void fn_8268CC30(float *out, const float *a, const float *b, float t)
{
  out[0] = (b[0] - a[0]) * t + a[0];
  out[3] = (b[3] - a[3]) * t + a[3];
  out[1] = (b[1] - a[1]) * t + a[1];
  out[4] = (b[4] - a[4]) * t + a[4];
  out[2] = (b[2] - a[2]) * t + a[2];
  out[5] = (b[5] - a[5]) * t + a[5];
}
