extern int fn_82232BC0();
extern int fn_8265CA20();
extern unsigned int lbl_82197EDC;


unsigned int * fn_82250B78(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82197EDC;
  fn_82232BC0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

