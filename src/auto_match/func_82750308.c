extern int fn_8267BE38();
extern int fn_8274E378();
extern unsigned int lbl_82013998;
extern unsigned int lbl_820139EC;


unsigned int * fn_82750308(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820139EC;
  param_1[4] = &lbl_82013998;
  fn_8274E378();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

