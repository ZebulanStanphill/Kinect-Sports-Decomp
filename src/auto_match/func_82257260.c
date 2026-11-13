extern int fn_8223B930();
extern int fn_82240DB8();
extern int fn_8288B300();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82198278;
extern unsigned int lbl_82198298;


unsigned int * fn_82257260(unsigned int *param_1)

{
  fn_8288B300(param_1,1);
  *param_1 = &lbl_82198298;
  fn_82240DB8(param_1 + 0xd,2);
  param_1[0xf] = 0;
  *(unsigned char *)(param_1 + 0x10) = 0;
  param_1[0xd] = &lbl_821970C0;
  fn_82240DB8(param_1 + 0x23,1);
  param_1[0x26] = 0;
  param_1[0x25] = 7;
  param_1[0x27] = 4;
  param_1[0x23] = &lbl_82198278;
  fn_82240DB8(param_1 + 0x39,1);
  param_1[0x3b] = 7;
  param_1[0x3d] = 4;
  param_1[0x3c] = 0;
  param_1[0x39] = &lbl_82198278;
  fn_82240DB8(param_1 + 0x4f,2);
  param_1[0x51] = 0;
  *(unsigned char *)(param_1 + 0x52) = 0;
  param_1[0x4f] = &lbl_821970C0;
  fn_82240DB8(param_1 + 0x65,2);
  param_1[0x67] = 0;
  *(unsigned char *)(param_1 + 0x68) = 0;
  param_1[0x65] = &lbl_821970C0;
  fn_8223B930(param_1 + 0x7b);
  return param_1;
}

