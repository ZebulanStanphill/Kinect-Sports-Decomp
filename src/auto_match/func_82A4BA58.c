extern int fn_82A3FE48();
extern int fn_82A5A1A8();
extern unsigned int lbl_82089670;
extern unsigned int lbl_82089688;
extern unsigned int lbl_82089D14;
extern unsigned int lbl_82089D24;
extern unsigned int lbl_82089D34;
extern unsigned int lbl_82089D38;
extern unsigned int lbl_82089D88;


unsigned int * fn_82A4BA58(unsigned int *param_1)

{
  int iVar1;
  
  param_1[4] = &lbl_82089688;
  param_1[5] = 1;
  param_1[1] = &lbl_82089D88;
  *param_1 = &lbl_82089D38;
  param_1[2] = &lbl_82089D34;
  param_1[6] = 0;
  param_1[3] = &lbl_82089D24;
  param_1[4] = &lbl_82089D14;
  param_1[7] = &lbl_82089670;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = &lbl_82089670;
  param_1[0x1d] = 0;
  fn_82A5A1A8(param_1 + 0x1e);
  param_1[0x55] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x56] = param_1 + 0x57;
  param_1[0x5d] = 0;
  param_1[0x5e] = 1;
  param_1[0x57] = 0;
  iVar1 = param_1[0x56];
  *(unsigned int *)(iVar1 + 8) = param_1[0x55];
  param_1[0x55] = iVar1 + 4;
  param_1[0x5f] = 1;
  param_1[0x60] = 0;
  fn_82A3FE48(0xffffffff83219d50);
  param_1[0x5f] = 2;
  return param_1;
}

