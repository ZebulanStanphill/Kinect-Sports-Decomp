extern int fn_828BDDA0();
extern float lbl_8200133C;
extern unsigned int lbl_82025988;
extern unsigned int lbl_82025990;


unsigned int * fn_828BE7E8(unsigned int *param_1)

{
  fn_828BDDA0(param_1);
  *(float *)(param_1+0x22) = -1.0f;
  *param_1 = &lbl_82025990;
  param_1[0x14] = &lbl_82025988;
  param_1[0x20] = 2;
  param_1[0x21] = 0x80000000;
  return param_1;
}

