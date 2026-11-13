extern int fn_8265CA20();
extern int fn_82E22818();
extern unsigned int lbl_8214BEAC;


unsigned int * fn_82E21D48(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8214BEAC;
  fn_82E22818();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

