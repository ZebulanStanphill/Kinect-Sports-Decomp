extern int fn_827597E0();
extern int fn_827A8B38();
extern unsigned int lbl_821AAD20;


unsigned int * fn_827A9B80(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_827A8B38(param_1 + 5);
  param_1[0x1e] = 0;
  *(unsigned short *)(param_1 + 0x1f) = 0;
  *(unsigned char *)((int)param_1 + 0x82) = 0x10;
  *(unsigned char *)((int)param_1 + 0x7e) = 0;
  *(unsigned char *)((int)param_1 + 0x7f) = 0;
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned char *)((int)param_1 + 0x81) = 0;
  *(unsigned char *)((int)param_1 + 0x83) = 0;
  *(unsigned char *)((int)param_1 + 0x8e) = 0x10;
  param_1[0x21] = 0;
  *(unsigned short *)(param_1 + 0x22) = 0;
  *(unsigned char *)((int)param_1 + 0x8a) = 0;
  *(unsigned char *)((int)param_1 + 0x8b) = 0;
  *(unsigned char *)(param_1 + 0x23) = 0;
  *(unsigned char *)((int)param_1 + 0x8d) = 0;
  *(unsigned char *)((int)param_1 + 0x8f) = 0;
  param_1[0x24] = 0;
  *(unsigned short *)(param_1 + 0x25) = 0;
  *(unsigned short *)((int)param_1 + 0x96) = 0;
  fn_827597E0(param_1 + 0x26);
  param_1[0x31] = 0;
  param_1[0x27] = 0xffffffff;
  uVar1 = lbl_821AAD20;
  param_1[6] = lbl_821AAD20;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x32] = 0xffffffff;
  return param_1;
}

