extern int fn_8265C990();
extern int fn_82C06390();
extern unsigned int lbl_820EC9C0;


unsigned int * fn_82C06618(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EC9C0;
  fn_82C06390();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8003);
  }
  return param_1;
}

