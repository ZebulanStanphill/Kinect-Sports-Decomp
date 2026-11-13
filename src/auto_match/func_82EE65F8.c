extern int fn_82E583E0();
extern int fn_82EE3128();
extern int fn_82F3E1E0();
extern unsigned int lbl_8215FDA0;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162C1C;


void fn_82EE65F8(unsigned int *param_1)

{
  *param_1 = &lbl_8215FDA0;
  param_1[1] = &lbl_8215FDD0;
  fn_82F3E1E0(param_1 + 1);
  param_1[0x12] = &lbl_82162C1C;
  if (param_1[0x13] == 0) {
    fn_82EE3128(param_1 + 0x12,0);
  }
  fn_82E583E0(param_1);
  return;
}

