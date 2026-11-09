void fn_8306B410(const float *a, const float *b, float *out, float t)
{
  out[0] = (b[0] - a[0]) * t + a[0];
  out[1] = (b[1] - a[1]) * t + a[1];
  out[2] = (b[2] - a[2]) * t + a[2];
  out[3] = (b[3] - a[3]) * t + a[3];
}
