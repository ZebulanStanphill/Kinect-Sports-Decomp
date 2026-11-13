extern int fn_82A4F4E0();
extern int fn_82A5C298();
extern unsigned int lbl_8208DF70;


unsigned int * fn_82A5CEC0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = 0;
  param_1[1] = &lbl_8208DF70;
  fn_82A5C298(param_1 + 1);
  if ((param_2 & 1) != 0) {
    fn_82A4F4E0(param_1);
  }
  return param_1;
}

