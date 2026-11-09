void fn_828107B0(float *a, float *b, float *out)
{
  out[0] = (a[0] - b[0] >= 0.0f) ? b[0] : a[0];
  out[1] = (a[1] - b[1] >= 0.0f) ? b[1] : a[1];
  out[2] = (a[2] - b[2] >= 0.0f) ? b[2] : a[2];
}
