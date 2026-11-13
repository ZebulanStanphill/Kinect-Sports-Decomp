extern int fn_82BC2958();
extern int fn_82BC3738();
extern unsigned int lbl_820E3ED0;


unsigned int *
fn_82BC37B8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  fn_82BC3738(param_1,param_4);
  *param_1 = &lbl_820E3ED0;
  fn_82BC2958(param_1,0,param_2);
  param_1[0x20] = param_3;
  param_1[5] = 0;
  return param_1;
}

