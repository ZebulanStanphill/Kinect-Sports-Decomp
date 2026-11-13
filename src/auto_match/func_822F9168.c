extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821AE780;


unsigned int *
fn_822F9168(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             int param_5)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &lbl_821AE780;
  fn_82365BD8(param_1 + 4,param_5);
  if (*(unsigned int *)(param_5 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_5 + 4));
  }
  return param_1;
}

