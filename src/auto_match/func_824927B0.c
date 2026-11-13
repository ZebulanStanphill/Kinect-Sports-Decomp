extern int fn_8248F8E8();
extern int fn_82491E88();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;


unsigned int * fn_824927B0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEBB8;
  fn_82491E88(param_1 + 0x14);
  *param_1 = &lbl_821BEBB0;
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

