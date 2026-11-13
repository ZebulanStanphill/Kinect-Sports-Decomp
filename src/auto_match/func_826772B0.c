extern int fn_82675A40();
extern int fn_8267ADA8();
extern int fn_8268CC00();
extern int fn_8268D758();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200527C;
extern unsigned int lbl_821AAD20;


unsigned int * fn_826772B0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  *param_1 = &lbl_8200527C;
  param_1[1] = 1;
  lVar4 = 0x13;
  puVar3 = param_1 + 9;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x1c;
  lVar4 = 0x13;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  fn_8268CC00(param_1 + 0x3b);
  fn_8268CC00(param_1 + 0x41);
  fn_8268CC00(param_1 + 0x47);
  fn_8268D758(param_1 + 0x4d);
  param_1[0x55] = param_1 + 0x55;
  param_1[0x56] = param_1 + 0x55;
  fn_8267ADA8(param_1 + 0x57,0);
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(unsigned char *)(param_1 + 0x879) = 0;
  param_1[0x87a] = 0;
  param_1[0x87b] = 0;
  param_1[0x87c] = 0;
  param_1[0x87d] = 0;
  param_1[0x87e] = 0;
  param_1[0x87f] = 0;
  param_1[0x880] = 0;
  fn_8267ADA8(param_1 + 0x881,0);
  puVar3 = param_1 + 0x888;
  lVar4 = 1;
  do {
    fn_82675A40(puVar3);
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 0x1d;
  } while (-1 < lVar4);
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[9] = 0;
  param_1[8] = 0xf;
  param_1[7] = 0xffffffff;
  lVar4 = 0x120;
  param_1[0x72] = 0xffffffff;
  puVar3 = param_1 + 0x94;
  *(unsigned char *)((int)param_1 + 0xdd) = 0;
  uVar2 = lbl_821AAD20;
  *(unsigned char *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  uVar1 = lbl_82002AE0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[0x73] = 1;
  param_1[0x71] = 0;
  param_1[0x36] = 0;
  param_1[0x97] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  do {
    puVar3[6] = uVar2;
    puVar3 = puVar3 + 7;
    *puVar3 = uVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[5] = 0;
  return param_1;
}

