extern int fn_822C71C8();
extern int fn_8265CA20();
extern unsigned int lbl_821AEEC0;


unsigned int * fn_82304438(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AEEC0;
  fn_822C71C8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

