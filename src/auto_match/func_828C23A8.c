extern int fn_82230218();
extern unsigned int lbl_82026054;


unsigned int * fn_828C23A8(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  param_1[1] = param_2;
  *param_1 = &lbl_82026054;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  fn_82230218(param_1 + 2,param_3,0,0xffffffffffffffff);
  return param_1;
}

