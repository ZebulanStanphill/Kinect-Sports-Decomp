extern int fn_82B7BEB0();
extern unsigned int lbl_820E0214;


unsigned int * fn_82BC3C90(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820E0214;
  if ((param_2 & 1) != 0) {
    fn_82B7BEB0(param_1[-1],param_1 + -1);
  }
  return param_1;
}

