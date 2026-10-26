void fn_8285AF28(const float *a, const float *b, float *out)
{
  out[0] = a[0] > b[0] ? a[0] : b[0];
  out[1] = a[1] < b[1] ? a[1] : b[1];
  out[2] = a[2] < b[2] ? a[2] : b[2];
  out[3] = a[3] > b[3] ? a[3] : b[3];
  out[4] = a[4];
  out[5] = a[5];
}
