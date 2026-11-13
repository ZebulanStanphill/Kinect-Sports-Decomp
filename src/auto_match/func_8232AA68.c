extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_82197010;


unsigned int * fn_8232AA68(unsigned int *param_1,unsigned int param_2)

{
  fn_828B55B0(param_1 + 1);
  *param_1 = &lbl_82197010;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

