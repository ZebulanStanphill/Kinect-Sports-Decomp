extern int fn_8305F2E8();
extern unsigned int lbl_8217E6BC;
extern unsigned int lbl_8217E9F0;


unsigned int * fn_830670C8(unsigned int *param_1)

{
  param_1[3] = 0;
  *param_1 = &lbl_8217E9F0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_8305F2E8(param_1 + 4);
  param_1[4] = &lbl_8217E6BC;
  return param_1;
}

