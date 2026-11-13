extern int fn_8248F8E8();
extern int fn_82494190();
extern unsigned int lbl_821BEDCC;


unsigned int * fn_82493F98(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEDCC;
  fn_82494190();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

