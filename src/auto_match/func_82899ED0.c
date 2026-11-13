extern int fn_8265CA20();
extern int fn_828991A0();
extern unsigned int lbl_82023998;


unsigned int * fn_82899ED0(unsigned int *param_1,unsigned int param_2)

{
  fn_828991A0(param_1 + 10);
  fn_828991A0(param_1 + 3);
  *param_1 = &lbl_82023998;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

