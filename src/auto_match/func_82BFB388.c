extern int fn_82BE8D50();
extern int fn_82BFB150();
extern unsigned int lbl_820EBEBC;


void fn_82BFB388(unsigned int *param_1)

{
  *param_1 = &lbl_820EBEBC;
  if (param_1[4] != 0) {
    fn_82BE8D50(param_1[4]);
    param_1[4] = 0;
  }
  fn_82BFB150(param_1);
  return;
}

