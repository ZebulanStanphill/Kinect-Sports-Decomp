extern int fn_82BFFBD0();
extern int fn_82C011F0();
extern unsigned int lbl_820EC498;


unsigned int * fn_82C01348(unsigned int *param_1)

{
  fn_82BFFBD0();
  *param_1 = &lbl_820EC498;
  fn_82C011F0(param_1);
  return param_1;
}

