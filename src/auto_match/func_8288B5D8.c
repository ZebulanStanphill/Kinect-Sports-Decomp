extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_8202363C;


unsigned int * fn_8288B5D8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8202363C;
  fn_828B55B0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

