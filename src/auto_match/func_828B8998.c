extern int fn_8265CA20();
extern int fn_828B82D0();
extern unsigned int lbl_820252F8;


unsigned int * fn_828B8998(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820252F8;
  fn_828B82D0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

