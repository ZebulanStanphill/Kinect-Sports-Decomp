extern int fn_82BE8CE0();
extern unsigned int lbl_820EBC08;


unsigned int * fn_82BF7250(unsigned int *param_1,int param_2)

{
  fn_82BE8CE0();
  param_1[2] = 0;
  *param_1 = &lbl_820EBC08;
  param_1[3] = 0x11;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 <= 0) {
    param_2 = 10;
  }
  param_1[7] = param_2;
  return param_1;
}

