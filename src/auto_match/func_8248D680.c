extern int fn_8262FEC8();
extern int fn_8265CA20();
extern unsigned int lbl_821BEAC4;


unsigned int * fn_8248D680(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BEAC4;
  fn_8262FEC8(param_1[1]);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

