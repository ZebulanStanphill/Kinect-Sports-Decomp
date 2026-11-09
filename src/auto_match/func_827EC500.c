extern float fn_82810280(float *a, float *b);
extern void fn_82810558(float *a, float *b, float s, float *out);

void fn_827EC500(float *v, float *n, float *out)
{
  float d = fn_82810280(v, n);
  fn_82810558(n, v, -d, out);
}
