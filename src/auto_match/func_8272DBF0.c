extern int fn_8268D280(int, void *, int);
extern int fn_827A0C20(int);
void *fn_8272DBF0(float *param_1, int param_2, int param_3)
{
  int v = fn_827A0C20(*(int *)(param_2 + 0xa0));
  param_1[0] = 0.0f;
  param_1[1] = 0.0f;
  param_1[2] = 0.0f;
  param_1[3] = 0.0f;
  fn_8268D280(param_3, param_1, v);
  return param_1;
}
