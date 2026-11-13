extern int fn_826C1AD8();
extern int fn_826C26B0();
extern unsigned int lbl_8200F2EC;
extern unsigned int lbl_8200F2F0;
extern unsigned int lbl_8200F3D8;


void fn_82713E80(unsigned int *param_1)

{
  *param_1 = &lbl_8200F2F0;
  param_1[4] = &lbl_8200F3D8;
  param_1[0xd] = &lbl_8200F2EC;
  fn_826C26B0(param_1 + 0xd);
  fn_826C1AD8(param_1);
  return;
}

