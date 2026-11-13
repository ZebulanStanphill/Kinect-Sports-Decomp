extern int fn_82FF3E80();
extern int fn_82FF3EE0();
extern unsigned int lbl_8216D2D0;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FB0AE8(unsigned int *param_1)

{
  fn_82FF3EE0();
  *param_1 = &lbl_8216D2D0;
  param_1[7] = &lbl_8217C940;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(unsigned short *)(param_1 + 0x2b) = 0xffff;
  fn_82FF3E80(param_1,1,1,0,0,0);
  return param_1;
}

