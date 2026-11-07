extern void fn_8280AD30(int a, int b, void *out);
extern float fn_82810BE8(void *p);
extern int fn_828116B8(int a, int b);
extern int fn_828598C0(int a, float f, int b, int c, int d, int e);

void fn_8285D3D0(int param_1, int param_2, int param_3, int *param_4, int param_5, int param_6)
{
  unsigned char buf[16];
  float f;
  int r;

  fn_8280AD30(param_2, param_3 + 0x1c, buf);
  f = fn_82810BE8(buf);
  r = fn_828116B8(*(int *)(param_1 + 0xac), *(int *)(param_3 + 0x48));
  param_4[1] = fn_828598C0(param_3, f, r, param_4[1], param_5, param_6);
}
