extern int fn_8268C210();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82010C70;
extern unsigned int lbl_821AAD20;


unsigned int * fn_82726070(unsigned int *param_1)

{
  float fVar1;
  double dVar2;
  
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0x40000;
  *param_1 = &lbl_82010C70;
  param_1[4] = 0;
  param_1[5] = 0;
  fVar1 = lbl_821AAD20;
  dVar2 = (double)lbl_821AAD20;
  param_1[6] = 0;
  param_1[7] = fVar1;
  param_1[8] = fVar1;
  param_1[9] = fVar1;
  param_1[10] = fVar1;
  param_1[0xd] = 0;
  param_1[0xb] = lbl_82002AE0;
  param_1[0xe] = fVar1;
  param_1[0xf] = fVar1;
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar1;
  fn_8268C210(param_1 + 0x12);
  fn_8268C210(param_1 + 0x13);
  *(unsigned short *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(unsigned char *)((int)param_1 + 0x31) = 0;
  *(unsigned char *)((int)param_1 + 0x32) = 0;
  *(unsigned char *)((int)param_1 + 0x33) = 0;
  *(unsigned char *)(param_1 + 0xc) = 0xff;
  param_1[7] = (float)dVar2;
  param_1[8] = (float)dVar2;
  param_1[9] = (float)dVar2;
  param_1[10] = (float)dVar2;
  return param_1;
}

