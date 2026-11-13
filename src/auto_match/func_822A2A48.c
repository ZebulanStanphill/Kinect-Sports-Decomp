extern int fn_824BF8A8();
extern unsigned int lbl_831CE850;
extern unsigned int uRam831ce854;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned int * fn_822A2A48(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  *param_1 = 0;
  puVar1 = param_1 + 0x87;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = 8;
  param_1[4] = 0;
  do {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xaa] = 0;
  *(unsigned short *)(param_1 + 7) = 0;
  puVar1 = param_1 + 0x91;
  uStack_50 = 0;
  uStack_4c = lbl_831CE850;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 5;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 7;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 0;
  fn_824BF8A8(param_1 + 0x9d,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 5;
  fn_824BF8A8(param_1 + 0x9d,&uStack_50);
  puVar1 = param_1 + 0x95;
  uStack_4c = uRam831ce854;
  uStack_50 = 2;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = uRam831ce854;
  uStack_50 = 3;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = uRam831ce854;
  uStack_50 = 4;
  fn_824BF8A8(puVar1,&uStack_50);
  puVar1 = param_1 + 0x99;
  uStack_4c = lbl_831CE850;
  uStack_50 = 1;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 6;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 7;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_50 = 1;
  uStack_4c = lbl_831CE850;
  fn_824BF8A8(param_1 + 0xa1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 6;
  fn_824BF8A8(param_1 + 0xa1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 8;
  fn_824BF8A8(param_1 + 0xa5,&uStack_50);
  return param_1;
}

