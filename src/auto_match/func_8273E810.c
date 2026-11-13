extern int fn_8265CA20();
extern int fn_827B0A40();
extern unsigned int lbl_8200C4D4;


unsigned int * fn_8273E810(unsigned int *param_1,unsigned int param_2)

{
  fn_827B0A40(param_1 + 1);
  *param_1 = &lbl_8200C4D4;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

