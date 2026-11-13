extern int fn_826A44C0();
extern int fn_826C26B0();
extern unsigned int lbl_82006F24;
extern unsigned int lbl_82006F28;
extern unsigned int lbl_82006F7C;


void fn_826A4AA8(unsigned int *param_1)

{
  *param_1 = &lbl_82006F7C;
  param_1[4] = &lbl_82006F28;
  param_1[0x12] = &lbl_82006F24;
  fn_826C26B0(param_1 + 0x12);
  fn_826A44C0(param_1);
  return;
}

