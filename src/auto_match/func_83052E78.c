extern int fn_8265CA20();
extern int fn_83055DC0();
extern unsigned int lbl_8217DE1C;


unsigned int * fn_83052E78(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217DE1C;
  fn_83055DC0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

