extern int fn_82230300();
extern int fn_830B4D38();
extern unsigned int lbl_821880F4;


unsigned int * fn_830B3FC8(unsigned int *param_1)

{
  fn_830B4D38();
  param_1[1] = 0;
  *param_1 = &lbl_821880F4;
  param_1[2] = 0;
  fn_82230300(param_1 + 3,0,0);
  fn_82230300(param_1 + 10,0,0);
  fn_82230300(param_1 + 0x11,0,0);
  fn_82230300(param_1 + 0x18,0,0);
  fn_82230300(param_1 + 0x1f,0,0);
  fn_82230300(param_1 + 0x26,0,0);
  fn_82230300(param_1 + 0x2d,0,0);
  fn_82230300(param_1 + 0x34,0,0);
  return param_1;
}

