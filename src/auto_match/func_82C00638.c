extern int fn_8265C990();
extern int fn_82C06590();
extern unsigned int lbl_820EBF28;


unsigned int * fn_82C00638(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBF28;
  fn_82C06590();
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8004);
  }
  return param_1;
}

