extern int fn_82E57CA0();
extern int fn_82F486E8();
extern unsigned int lbl_821631DC;
extern unsigned int lbl_821631F0;


void fn_82F48A30(unsigned int *param_1)

{
  *param_1 = &lbl_821631F0;
  param_1[1] = &lbl_821631DC;
  fn_82F486E8(param_1 + 1);
  fn_82E57CA0(param_1 + 0xc);
  return;
}

