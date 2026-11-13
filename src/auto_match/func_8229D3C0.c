extern int fn_822A05B0();
extern int fn_8265CA20();
extern unsigned int lbl_821AB238;


unsigned int * fn_8229D3C0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AB238;
  fn_822A05B0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

