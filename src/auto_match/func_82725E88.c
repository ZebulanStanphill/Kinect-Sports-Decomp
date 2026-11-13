extern int fn_826C26B0();
extern int fn_82725A58();
extern unsigned int lbl_82011060;
extern unsigned int lbl_820111E8;
extern unsigned int lbl_820111EC;


void fn_82725E88(unsigned int *param_1)

{
  *param_1 = &lbl_820111EC;
  param_1[4] = &lbl_82011060;
  param_1[0xe] = &lbl_820111E8;
  fn_826C26B0(param_1 + 0xe);
  fn_82725A58(param_1);
  return;
}

