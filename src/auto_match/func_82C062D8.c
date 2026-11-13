extern int fn_8265C990();
extern int fn_82C053E8();
extern int fn_82C06390();
extern unsigned int lbl_820EC938;


unsigned int * fn_82C062D8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC938;
  fn_82C053E8();
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c800a);
  }
  return param_1;
}

