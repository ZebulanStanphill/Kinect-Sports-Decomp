extern int fn_82E4FE40();
extern int fn_82F3BB18();
extern int fn_82F3E1E0();
extern unsigned int lbl_82162CD4;
extern unsigned int lbl_82162CE8;


void fn_82F3BED8(unsigned int *param_1)

{
  unsigned int *sub = param_1 + 1;
  *param_1 = &lbl_82162CE8;
  param_1[1] = &lbl_82162CD4;
  if (param_1[0x1c] != 0) {
    fn_82E4FE40(param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  if (sub[2] != 0) {
    fn_82F3E1E0(sub);
  }
  fn_82F3BB18(param_1);
  return;
}

