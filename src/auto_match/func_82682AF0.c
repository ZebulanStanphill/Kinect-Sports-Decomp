extern int fn_8267C4C8();
extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C2D08();
extern unsigned int lbl_820057A8;
extern unsigned int lbl_82005800;


unsigned int *
fn_82682AF0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  
  fn_826C2D08();
  *param_1 = &lbl_82005800;
  param_1[4] = &lbl_820057A8;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[0xc] = (int)param_3;
  param_1[0xd] = param_4;
  uVar1 = fn_826B14D8(*param_2,7);
  fn_826829A0(param_1 + 4,param_2,uVar1);
  return param_1;
}

