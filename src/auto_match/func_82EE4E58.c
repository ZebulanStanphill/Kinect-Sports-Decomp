extern int fn_82E58050();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82154978;
extern unsigned int lbl_8215497C;
extern unsigned int lbl_82154980;
extern unsigned int lbl_82154984;
extern unsigned int lbl_82154B98;
extern unsigned int lbl_82154B9C;
extern unsigned int lbl_82154BA0;
extern unsigned int lbl_82154BA4;
extern unsigned int lbl_8215FD40;
extern unsigned int lbl_8215FDD0;


unsigned int * fn_82EE4E58(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_82E58050();
  *param_1 = &lbl_8215FD40;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(unsigned short *)((int)param_1 + 0x56) = 0;
  *(unsigned char *)(param_1 + 0x16) = 0;
  param_1[0x12] = &lbl_82152F14;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_82154978;
  param_1[5] = lbl_8215497C;
  param_1[6] = lbl_82154980;
  uVar1 = lbl_82154984;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[7] = uVar1;
  param_1[0x25] = lbl_82154B98;
  param_1[0x26] = lbl_82154B9C;
  param_1[0x27] = lbl_82154BA0;
  param_1[0x28] = lbl_82154BA4;
  return param_1;
}

