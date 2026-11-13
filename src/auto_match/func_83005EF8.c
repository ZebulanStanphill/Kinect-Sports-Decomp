extern int fn_82FFF3E0();
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_8217BF18;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821AAD20;


unsigned int * fn_83005EF8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  fn_82FFF3E0();
  param_1[7] = &lbl_821968A4;
  param_1[8] = 0;
  *param_1 = &lbl_8217BF18;
  param_1[7] = &lbl_8217C940;
  param_1[9] = 0;
  param_1[10] = 0;
  *(unsigned short *)(param_1 + 0xb) = 0;
  *(unsigned short *)((int)param_1 + 0x2e) = 0;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_8207F25C;
  *(unsigned short *)(param_1 + 0xc) = 0;
  *(unsigned short *)((int)param_1 + 0x32) = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  *(unsigned char *)((int)param_1 + 0x3d) = 4;
  *(unsigned char *)(param_1 + 0xf) = 0;
  *(unsigned char *)((int)param_1 + 0x3e) = *(unsigned char *)((int)param_1 + 0x3e) & 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}

