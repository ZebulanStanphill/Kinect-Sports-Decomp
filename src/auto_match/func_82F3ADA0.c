extern int fn_82E58050();
extern int fn_82F3A790();
extern unsigned int lbl_82154B38;
extern unsigned int lbl_82154B3C;
extern unsigned int lbl_82154B40;
extern unsigned int lbl_82154B44;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162C24;
extern unsigned int lbl_82162C2C;


unsigned int * fn_82F3ADA0(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_82162C2C;
  param_1[1] = &lbl_8215FDD0;
  fn_82F3A790(param_1 + 0x12);
  param_1[0x12] = &lbl_82162C24;
  param_1[0x49a] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_82154B38;
  param_1[5] = lbl_82154B3C;
  param_1[6] = lbl_82154B40;
  param_1[7] = lbl_82154B44;
  return param_1;
}

