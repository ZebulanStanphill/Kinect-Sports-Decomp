extern int fn_8265C990();
extern int fn_82BFFFD0();
extern int fn_82C013D0();
extern unsigned int lbl_820EC498;


unsigned int * fn_82C01B50(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC498;
  fn_82C013D0();
  fn_82BFFFD0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c802a);
  }
  return param_1;
}

