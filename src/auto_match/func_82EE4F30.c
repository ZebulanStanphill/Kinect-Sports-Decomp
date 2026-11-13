extern int fn_82E3BCC8();
extern int fn_82E583E0();
extern int fn_82F3E1E0();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_8215FD40;
extern unsigned int lbl_8215FDD0;


void fn_82EE4F30(unsigned int *param_1)

{
  *param_1 = &lbl_8215FD40;
  param_1[1] = &lbl_8215FDD0;
  fn_82F3E1E0(param_1 + 1);
  param_1[0x12] = &lbl_82152F14;
  if (param_1[0x13] == 0) {
    fn_82E3BCC8(param_1 + 0x12,0);
  }
  fn_82E583E0(param_1);
  return;
}

