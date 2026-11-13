extern int fn_8265CA20();
extern int fn_828974A8();
extern unsigned int lbl_82197070;


unsigned int * fn_82240F28(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82197070;
  fn_828974A8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

