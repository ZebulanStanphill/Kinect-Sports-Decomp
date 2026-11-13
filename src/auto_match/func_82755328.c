extern int fn_8268B330();
extern int fn_827544C0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820141E0;


unsigned int * fn_82755328(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  param_1[1] = 1;
  *param_1 = &lbl_820141E0;
  param_1[2] = 0;
  param_1[6] = 0;
  fn_8268B330(param_1 + 7);
  param_1[9] = 0x10;
  param_1[8] = lbl_82002AE0;
  param_1[10] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = param_3;
  fn_827544C0(param_1);
  return param_1;
}

