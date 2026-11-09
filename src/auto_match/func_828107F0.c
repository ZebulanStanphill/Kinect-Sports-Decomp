void fn_828107F0(float *a, float *b, float *out)
{
  out[0] = (a[0] - b[0] >= 0.0f) ? a[0] : b[0];
  out[1] = (a[1] - b[1] >= 0.0f) ? a[1] : b[1];
  out[2] = (a[2] - b[2] >= 0.0f) ? a[2] : b[2];
}
