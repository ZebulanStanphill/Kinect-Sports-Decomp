extern int fn_82E2A9A8();
extern int fn_82E4FE40();
extern unsigned int lbl_8214C5B0;
extern unsigned int lbl_8214C650;


void fn_82E2CFB8(unsigned int *param_1)

{
  *param_1 = &lbl_8214C650;
  param_1[1] = &lbl_8214C5B0;
  fn_82E4FE40(param_1[0xd]);
  fn_82E4FE40(param_1[0xe]);
  fn_82E2A9A8(param_1);
  return;
}

