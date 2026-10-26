extern void fn_8280E418(float *a, float *b);
extern void fn_8280F970(const float *axis, float angle, float *out);

float *fn_8281E700(float *param_1, const float *axis, float angle)
{
  fn_8280F970(axis, angle, param_1);
  fn_8280E418(param_1, param_1);
  return param_1;
}
