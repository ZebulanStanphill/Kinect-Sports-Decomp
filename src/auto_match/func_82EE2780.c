extern int fn_82EE25E8();
extern int fn_82F34870();
extern unsigned int lbl_8215FBB8;
extern unsigned int lbl_8215FBE0;


void fn_82EE2780(unsigned int *param_1)

{
  *param_1 = &lbl_8215FBE0;
  param_1[0x13] = &lbl_8215FBB8;
  fn_82F34870(param_1 + 0x13);
  fn_82EE25E8(param_1);
  return;
}

