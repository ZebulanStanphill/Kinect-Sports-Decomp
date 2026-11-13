extern int fn_82240D08();
extern int fn_8265CA20();
extern unsigned int lbl_82023A4C;


unsigned int * fn_82899AD8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82023A4C;
  fn_82240D08(param_1 + 3);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

