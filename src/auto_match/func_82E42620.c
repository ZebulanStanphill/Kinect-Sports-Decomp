extern int fn_82E2D9C0();
extern int fn_82E3BCC8();
extern int fn_82E423A0();
extern int fn_82E50EA0();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82152FB4;
extern unsigned int lbl_82152FC4;


extern int fn_82E58A90();

void fn_82E42620(unsigned int *param_1)

{
  *param_1 = &lbl_82152FC4;
  param_1[1] = &lbl_82152FB4;
  fn_82E423A0();
  fn_82E58A90(param_1 + 0x12d);
  fn_82E2D9C0(param_1 + 0x12d);
  param_1[0x9b] = &lbl_82152F14;
  if (param_1[0x9c] == 0) {
    fn_82E3BCC8(param_1 + 0x9b,0);
  }
  fn_82E50EA0(param_1 + 4);
  return;
}

