extern int fn_82E2D9C0();
extern int fn_82E3BCC8();
extern int fn_82E3FD48();
extern int fn_82E58A90();
extern int fn_82E4FE40();
extern int fn_82E50EA0();
extern int fn_82EF16C8();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82152F20;


void fn_82E40618(unsigned int *param_1)

{
  *param_1 = &lbl_82152F20;
  fn_82E3FD48();
  if (param_1[0xb2] != 0) {
    fn_82E4FE40(param_1[0xb2]);
  }
  param_1[0xb2] = 0;
  fn_82EF16C8(param_1 + 0x6b);
  fn_82E58A90(param_1 + 0x30);
  fn_82E2D9C0(param_1 + 0x30);
  param_1[0x1e] = &lbl_82152F14;
  if (param_1[0x1f] == 0) {
    fn_82E3BCC8(param_1 + 0x1e,0);
  }
  fn_82E50EA0(param_1 + 2);
  return;
}

