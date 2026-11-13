extern int fn_8268B330();
extern unsigned int lbl_82005B54;


unsigned int * fn_82686D60(unsigned int *param_1)

{
  param_1[1] = 1;
  *param_1 = &lbl_82005B54;
  fn_8268B330(param_1 + 4);
  param_1[2] = 1;
  param_1[3] = 0;
  return param_1;
}

