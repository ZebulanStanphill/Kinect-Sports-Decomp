extern int fn_8268C3A8(void *, int);
extern int fn_826E76C8(void *, int, int, int);
extern unsigned int lbl_8200D6D0;

int *fn_826E8400(int *param_1, unsigned int param_2, int param_3, int param_4, int param_5, int param_6)
{
  int *q = param_1 + 4;
  *param_1 = (int)&lbl_8200D6D0;
  *q = 0;
  fn_8268C3A8(param_1 + 6, param_4);
  param_1[0xf] = param_2;
  if (param_2 != 0) { param_1[0x10] = param_3; } else { param_1[0x10] = 0; }
  fn_826E76C8(param_1, 0, param_5, param_6);
  param_1[0xc] = param_1[0x10];
  param_1[0xd] = param_1[0x10];
  return param_1;
}
