extern int fn_825D50C0();
extern int fn_82625080();
extern unsigned int lbl_821CADB0;


void fn_82625300(unsigned int *param_1)

{
  *param_1 = &lbl_821CADB0;
  if ((param_1[0x14] != 0) && ((int)param_1[0x16] == 0)) {
    fn_82625080(param_1[0x14],1);
  }
  fn_825D50C0(param_1);
  return;
}

