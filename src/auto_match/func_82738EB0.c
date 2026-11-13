extern int fn_826C26B0();
extern int fn_82738E60();
extern unsigned int lbl_82011B48;
extern unsigned int lbl_82011B9C;
extern unsigned int lbl_82011BC0;


void fn_82738EB0(unsigned int *param_1)

{
  *param_1 = &lbl_82011B9C;
  param_1[4] = &lbl_82011B48;
  param_1[0x11] = &lbl_82011BC0;
  fn_826C26B0(param_1 + 0x11);
  fn_82738E60(param_1);
  return;
}

