extern int fn_82383298();
extern int fn_82517E78();
extern unsigned int lbl_821B3080;
extern unsigned int lbl_821B3A90;
extern unsigned int lbl_821B3AE0;
extern unsigned int lbl_821B96A8;


void fn_82382010(unsigned int *param_1)

{
  *param_1 = &lbl_821B3A90;
  param_1[0x1a] = &lbl_821B3AE0;
  fn_82383298(param_1 + 0x22);
  *param_1 = &lbl_821B3080;
  param_1[0x1a] = &lbl_821B96A8;
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 0x84) = 0;
    param_1[0x20] = 0;
  }
  fn_82517E78(param_1);
  return;
}

