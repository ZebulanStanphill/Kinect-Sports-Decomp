extern int fn_82BE56C0();
extern unsigned int lbl_820E9264;


unsigned int * fn_82BE5270(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820E9264;
  if ((param_2 & 1) != 0) {
    fn_82BE56C0();
  }
  return param_1;
}

