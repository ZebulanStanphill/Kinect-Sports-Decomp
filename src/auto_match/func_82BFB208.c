extern int fn_82BE8D50();
extern int fn_82BFB150();
extern unsigned int lbl_820EBEB4;


void fn_82BFB208(unsigned int *param_1)

{
  *param_1 = &lbl_820EBEB4;
  if (param_1[4] != 0) {
    fn_82BE8D50(param_1[4]);
    param_1[4] = 0;
  }
  fn_82BFB150(param_1);
  return;
}

