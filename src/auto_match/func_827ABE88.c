extern int fn_8267BE38();
extern int fn_8267C488();
extern unsigned int lbl_82015E08;


unsigned int * fn_827ABE88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82015E08;
  fn_8267C488();
  if ((param_2 & 1) != 0) {
    fn_8267BE38(param_1);
  }
  return param_1;
}

