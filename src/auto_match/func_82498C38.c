extern int fn_82492768();
extern int fn_82498EA8();
extern unsigned int lbl_821BEEC4;
extern unsigned int lbl_821BEFA4;


void fn_82498C38(unsigned int *param_1)

{
  *param_1 = &lbl_821BEFA4;
  fn_82498EA8(param_1 + 0xc);
  fn_82492768(param_1 + 1);
  *param_1 = &lbl_821BEEC4;
  return;
}

