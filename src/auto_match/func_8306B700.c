static __forceinline void Lerp4(const float *a, const float *b, float *out, float t)
{
  out[0] = (b[0] - a[0]) * t + a[0];
  out[1] = (b[1] - a[1]) * t + a[1];
  out[2] = (b[2] - a[2]) * t + a[2];
  out[3] = (b[3] - a[3]) * t + a[3];
}

void fn_8306B700(float x0, const float *a, float x1, const float *b, float x, float *out)
{
  float scale = 1.0f / (x1 - x0);
  float offset = x0 / (x0 - x1);
  float t = scale * x + offset;
  if (t < 0.0f) {
    t = 0.0f;
  } else if (t > 1.0f) {
    t = 1.0f;
  }
  Lerp4(a, b, out, t);
}
