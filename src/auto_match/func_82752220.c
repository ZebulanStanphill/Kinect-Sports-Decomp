extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_82013D54;
extern unsigned int lbl_82013F64;
extern unsigned int lbl_82013F68;


void fn_82752220(unsigned int *param_1)

{
  *param_1 = &lbl_82013D54;
  param_1[4] = &lbl_82013F68;
  param_1[0xc] = &lbl_82013F64;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

