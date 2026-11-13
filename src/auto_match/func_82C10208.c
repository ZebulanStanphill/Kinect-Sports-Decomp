extern int fn_8265C990();
extern int fn_82C06390();
extern int fn_82C0E450();
extern unsigned int lbl_820ECE50;


unsigned int * fn_82C10208(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820ECE50;
  fn_82C0E450();
  fn_82C06390(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265C990(param_1,0x208c8032);
  }
  return param_1;
}

