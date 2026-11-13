extern int fn_8267BE38();
extern int fn_8267C540();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82006850;


unsigned int * fn_8269B820(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82006850;
  param_1[3] = &lbl_82005700;
  fn_8267C540();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

