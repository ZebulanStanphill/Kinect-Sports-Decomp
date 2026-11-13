extern int fn_82230300();
extern int fn_830B4D38();
extern unsigned int lbl_821880F4;


void fn_830B4090(unsigned int *param_1)

{
  *param_1 = &lbl_821880F4;
  fn_82230300(param_1 + 0x34,1,0);
  fn_82230300(param_1 + 0x2d,1,0);
  fn_82230300(param_1 + 0x26,1,0);
  fn_82230300(param_1 + 0x1f,1,0);
  fn_82230300(param_1 + 0x18,1,0);
  fn_82230300(param_1 + 0x11,1,0);
  fn_82230300(param_1 + 10,1,0);
  fn_82230300(param_1 + 3,1,0);
  fn_830B4D38(param_1);
  return;
}

