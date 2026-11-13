extern int fn_828B5608();
extern int fn_828BDDA0();
extern unsigned int lbl_82023ABC;
extern unsigned int lbl_82023AC0;
extern unsigned int lbl_82023C3C;
extern unsigned int lbl_82197140;


unsigned int * fn_828BF150(unsigned int *param_1)

{
  fn_828BDDA0();
  param_1[0x20] = 0;
  *param_1 = &lbl_82023AC0;
  param_1[0x14] = &lbl_82023ABC;
  param_1[0x21] = 0;
  param_1[0x22] = &lbl_82197140;
  param_1[0x23] = 9;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = &lbl_82023C3C;
  fn_828B5608(param_1 + 0x28);
  param_1[0x2a] = 2;
  *(unsigned char *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0xffffffff;
  return param_1;
}

