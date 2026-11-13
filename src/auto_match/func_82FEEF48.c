extern int fn_8265CA20();
extern int fn_83021E70();
extern unsigned int lbl_8217D040;


unsigned int * fn_82FEEF48(unsigned int *param_1,unsigned int param_2)

{
  fn_83021E70(param_1 + 3);
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

