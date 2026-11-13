extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_820102E4;
extern unsigned int lbl_820102E8;
extern unsigned int lbl_8201039C;


void fn_8271FBD0(unsigned int *param_1)

{
  *param_1 = &lbl_8201039C;
  param_1[4] = &lbl_820102E8;
  param_1[0xc] = &lbl_820102E4;
  fn_826C26B0(param_1 + 0xc);
  fn_826C1AD8(param_1);
  return;
}

