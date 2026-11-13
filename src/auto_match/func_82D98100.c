extern unsigned int *auStack_20;
extern int fn_82CE5458();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134508;


unsigned short * fn_82D98100(unsigned short *param_1)

{
  unsigned int auStack_20 [4];
  
  *param_1 = 2;
  param_1[0x48] = 0x13;
  *(unsigned char *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(unsigned char *)(param_1 + 0x71) = 1;
  *(unsigned char *)(param_1 + 0x72) = 1;
  param_1[0x70] = 0x11;
  *(unsigned char *)(param_1 + 0x77) = 1;
  auStack_20[0] = lbl_82002AE0;
  param_1[0x76] = 0xf;
  *(unsigned char *)(param_1 + 0x81) = 1;
  param_1[0x80] = 0x10;
  *(unsigned char *)(param_1 + 0x83) = 0;
  *(unsigned char *)(param_1 + 0x8b) = 1;
  param_1[0x8a] = 0x10;
  *(unsigned char *)(param_1 + 0x8d) = 0;
  param_1[0x94] = 5;
  *(unsigned char *)(param_1 + 0x95) = 0;
  fn_82CE5458((int)param_1 + 299,auStack_20);
  *(unsigned int *)(param_1 + 0x96) = lbl_82134508;
  return param_1;
}

