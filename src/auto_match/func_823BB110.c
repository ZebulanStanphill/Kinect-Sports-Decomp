extern int fn_82359C18();
extern int fn_82517E78();
extern unsigned int lbl_821B5DA0;
extern unsigned int lbl_821B5DE8;


void fn_823BB110(unsigned int *param_1)

{
  *param_1 = &lbl_821B5DA0;
  param_1[0x1a] = &lbl_821B5DE8;
  fn_82359C18(param_1 + 0x22);
  fn_82517E78(param_1);
  return;
}

