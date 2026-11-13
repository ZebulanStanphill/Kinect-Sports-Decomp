extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_82197100;


unsigned int * fn_82255D58(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82197100;
  fn_8289D4C0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

