extern int fn_8267BE38();
extern int fn_8274E378();
extern unsigned int lbl_82013B58;
extern unsigned int lbl_82013BAC;


unsigned int * fn_82751600(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82013BAC;
  param_1[4] = &lbl_82013B58;
  fn_8274E378();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

