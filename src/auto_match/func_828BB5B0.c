extern int fn_82230218();
extern unsigned int lbl_82025418;


unsigned int *
fn_828BB5B0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = &lbl_82025418;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(unsigned char *)(param_1 + 3) = 0;
  fn_82230218(param_1 + 3,param_4,0,0xffffffffffffffff);
  return param_1;
}

