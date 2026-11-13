extern int fn_822FF888();
extern int fn_82359C18();
extern int fn_828974A8();
extern int fn_8289D4C0();
extern unsigned int lbl_82197070;
extern unsigned int lbl_82197100;
extern unsigned int lbl_821AEC2C;
extern unsigned int lbl_821B665C;


void fn_823DAE60(unsigned int *param_1)

{
  unsigned int *sub = param_1 + 0x12;
  *param_1 = &lbl_821B665C;
  param_1[0x1e] = &lbl_82197100;
  fn_8289D4C0(sub + 0xc);
  param_1[0x12] = &lbl_821AEC2C;
  fn_82359C18(sub + 6);
  fn_822FF888(sub);
  *param_1 = &lbl_82197070;
  fn_828974A8(param_1);
  return;
}

