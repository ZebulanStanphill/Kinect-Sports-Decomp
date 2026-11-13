extern int fn_82E22E18();
extern int fn_82E23670();
extern int fn_82E23950();
extern unsigned int lbl_8214BF70;
extern unsigned int lbl_8214BF74;
extern unsigned int lbl_821B4200;


void fn_82E23148(int *param_1)

{
  *param_1 = &lbl_8214BF74;
  param_1[1] = &lbl_8214BF70;
  fn_82E22E18();
  fn_82E23950(param_1 + 0xc);
  if (param_1[0x5e] != 0) {
    fn_82E23670(param_1 + 0x5a,0x45b,0x45b,0);
  }
  param_1[1] = &lbl_821B4200;
  return;
}

