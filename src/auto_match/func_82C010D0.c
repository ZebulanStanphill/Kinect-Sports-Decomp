extern int fn_8265C990();
extern int fn_82C00718();
extern int fn_82C06390();
extern unsigned int lbl_820EBF88;


unsigned int * fn_82C010D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBF88;
  fn_82C00718();
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8028);
  }
  return param_1;
}

