extern int fn_82E7F0F8();
extern unsigned int lbl_8215F058;


unsigned int * fn_82E7B5F8(unsigned int *param_1)

{
  *param_1 = &lbl_8215F058;
  fn_82E7F0F8(param_1 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  return param_1;
}

