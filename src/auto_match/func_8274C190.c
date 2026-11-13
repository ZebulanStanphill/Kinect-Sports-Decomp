extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_8200FFD8;
extern unsigned int lbl_82013398;
extern unsigned int lbl_820134DC;


void fn_8274C190(unsigned int *param_1)

{
  *param_1 = &lbl_820134DC;
  param_1[4] = &lbl_8200FFD8;
  param_1[0xc] = &lbl_82013398;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

