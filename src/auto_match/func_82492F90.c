extern int fn_8248F8E8();
extern int fn_8248F9A0();
extern unsigned int lbl_821BEBF4;


unsigned int * fn_82492F90(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEBF4;
  fn_8248F9A0();
  if ((param_2 & 1) != 0) {
    fn_8248F8E8(param_1);
  }
  return param_1;
}

