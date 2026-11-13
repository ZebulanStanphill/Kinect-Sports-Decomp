extern unsigned int *auStack_20;
extern int fn_82CE5458();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134508;


unsigned short * fn_82D93FE8(unsigned short *param_1)

{
  unsigned int auStack_20 [4];
  
  *param_1 = 2;
  param_1[0x48] = 0x12;
  *(unsigned char *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(unsigned char *)(param_1 + 0x53) = 1;
  *(unsigned char *)(param_1 + 0x54) = 1;
  param_1[0x52] = 0x11;
  auStack_20[0] = lbl_82002AE0;
  *(unsigned char *)(param_1 + 0x59) = 1;
  param_1[0x58] = 0xe;
  param_1[0x60] = 0xc;
  param_1[0x62] = 5;
  *(unsigned char *)(param_1 + 99) = 0;
  fn_82CE5458((int)param_1 + 199,auStack_20);
  *(unsigned int *)(param_1 + 100) = lbl_82134508;
  return param_1;
}

