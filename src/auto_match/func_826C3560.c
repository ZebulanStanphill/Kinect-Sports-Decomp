extern int fn_826829A0();
extern int fn_826C2D08();
extern unsigned int lbl_8200B7A8;
extern unsigned int lbl_8200B7F0;


unsigned int *
fn_826C3560(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  fn_826C2D08();
  param_1[0xc] = param_4;
  *param_1 = &lbl_8200B7A8;
  param_1[4] = &lbl_8200B7F0;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

