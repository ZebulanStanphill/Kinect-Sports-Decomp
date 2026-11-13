extern int fn_8265CA20();
extern int fn_8288B338();
extern unsigned int lbl_82196884;


unsigned int * fn_82240F80(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196884;
  fn_8288B338();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

