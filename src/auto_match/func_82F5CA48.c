extern int fn_82F52970();
extern int fn_82F52978();
extern unsigned int lbl_82167C1C;


unsigned int * fn_82F5CA48(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82167C1C;
  fn_82F52978();
  if ((param_2 & 1) != 0) {
    fn_82F52970(param_1);
  }
  return param_1;
}

