extern int fn_82230300();
extern int fn_830B3FC8();
extern unsigned int lbl_821880B0;


unsigned int * fn_830B35A0(unsigned int *param_1)

{
  fn_830B3FC8();
  param_1[0x3b] = 0;
  *param_1 = &lbl_821880B0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x400;
  param_1[0x3e] = 0;
  fn_82230300(param_1 + 0x3f,0,0);
  return param_1;
}

