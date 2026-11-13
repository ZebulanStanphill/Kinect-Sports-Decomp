extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_82013688;
extern unsigned int lbl_820136DC;
extern unsigned int lbl_82013700;
extern unsigned int lbl_82013724;
extern unsigned int lbl_82013728;


void fn_8274E398(unsigned int *param_1)

{
  *param_1 = &lbl_82013700;
  param_1[4] = &lbl_82013728;
  param_1[0xf] = &lbl_82013724;
  fn_826C26B0(param_1 + 0xf);
  *param_1 = &lbl_820136DC;
  param_1[4] = &lbl_82013688;
  fn_826C1AD8(param_1);
  return;
}

