extern int fn_828BDDA0();
extern int fn_828E9D28();
extern unsigned int lbl_820265B0;
extern unsigned int lbl_820265B8;


unsigned int * fn_828CD318(unsigned int *param_1)

{
  fn_828BDDA0();
  param_1[0x20] = 0;
  *param_1 = &lbl_820265B8;
  param_1[0x14] = &lbl_820265B0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  fn_828E9D28(param_1 + 0x26,0,0);
  *(unsigned char *)(param_1 + 0x30) = 0;
  *(unsigned char *)((int)param_1 + 0xc1) = 0;
  param_1[0x31] = 0;
  return param_1;
}

