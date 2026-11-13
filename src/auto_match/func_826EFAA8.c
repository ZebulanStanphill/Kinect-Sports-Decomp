extern int fn_8265CA20();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200D8E4;


unsigned int * fn_826EFAA8(unsigned int *param_1,unsigned int param_2)

{
  param_1[3] = &lbl_8200C4D4;
  *param_1 = &lbl_8200D8E4;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

