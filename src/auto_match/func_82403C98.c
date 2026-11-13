extern int fn_82359C18();
extern int fn_82517E78();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B7C00;
extern unsigned int lbl_821B7C50;
extern unsigned int lbl_821B96A8;


void fn_82403C98(unsigned int *param_1)

{
  *param_1 = &lbl_821B7C00;
  param_1[0x1a] = &lbl_821B7C50;
  fn_82359C18(param_1 + 0x22);
  *param_1 = &lbl_821B3080;
  param_1[0x1a] = &lbl_821B96A8;
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 0x84) = 0;
    param_1[0x20] = 0;
  }
  fn_82517E78(param_1);
  return;
}

