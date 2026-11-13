extern int fn_83005EF8();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8217C1C0;
extern unsigned int lbl_8217C940;


unsigned int * fn_8300AA60(unsigned int *param_1)

{
  fn_83005EF8();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = lbl_8216C698;
  *param_1 = &lbl_8217C1C0;
  param_1[7] = &lbl_8217C940;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_1 + 0x28) & 7;
  *(unsigned short *)(param_1 + 0x27) = 0;
  *(unsigned short *)((int)param_1 + 0x9e) = 0;
  return param_1;
}

