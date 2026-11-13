extern int fn_8265CA20();
extern int fn_827B02B0();
extern unsigned int lbl_8200D8E4;


unsigned int * fn_826F28E8(unsigned int *param_1,unsigned int param_2)

{
  fn_827B02B0(param_1 + 4);
  *param_1 = &lbl_8200D8E4;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

