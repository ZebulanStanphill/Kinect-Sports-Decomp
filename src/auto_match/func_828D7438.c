extern int fn_82230218();
extern unsigned int lbl_82026D6C;


unsigned int *
fn_828D7438(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &lbl_82026D6C;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0xf;
  param_1[0xb] = 0;
  *(unsigned char *)(param_1 + 7) = 0;
  fn_82230218(param_1 + 7,param_4,0,0xffffffffffffffff);
  return param_1;
}

