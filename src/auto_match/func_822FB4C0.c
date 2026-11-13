extern int fn_822C70F0();
extern int fn_8234E590();
extern unsigned int lbl_821AE820;


unsigned int *
fn_822FB4C0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  fn_822C70F0();
  *param_1 = &lbl_821AE820;
  fn_8234E590(param_1 + 0x15,param_4,param_5,param_6,param_7);
  param_1[0x14] = 2;
  return param_1;
}

