extern int fn_8268C750();
extern unsigned int lbl_82005B54;


unsigned int * fn_82686E80(unsigned int *param_1,int param_2)

{
  param_1[1] = 1;
  *param_1 = &lbl_82005B54;
  fn_8268C750(param_1 + 4,param_2 + 0x10);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  return param_1;
}

