extern int fn_8248F8E8();
extern int fn_82491E88();
extern unsigned int lbl_821BEBAC;
extern unsigned int lbl_821BEBB0;


unsigned int * fn_82492568(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEBAC;
  fn_82491E88(param_1 + 0xc);
  *param_1 = &lbl_821BEBB0;
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

