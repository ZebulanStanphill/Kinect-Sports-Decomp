extern int fn_827B3DB8();
extern int fn_827B5460();
extern int fn_827B83E8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82016254;
extern unsigned int lbl_82016298;
extern unsigned int lbl_8201629C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_827B9178(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  uVar3 = lbl_821AAD20;
  lVar5 = 0x20;
  puVar4 = param_1 + 0xc;
  param_1[5] = lbl_821AAD20;
  *param_1 = 0;
  param_1[6] = uVar3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  do {
    puVar4[3] = &lbl_82016254;
    puVar4[4] = 0;
    puVar4 = puVar4 + 5;
    *puVar4 = 0xffffffff;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0xb4] = 0;
  uVar2 = lbl_8200D8DC;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = uVar1;
  param_1[0xbc] = uVar2;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[200] = uVar1;
  param_1[0xc9] = uVar1;
  param_1[0xc5] = 0;
  param_1[0xca] = uVar3;
  param_1[0xc6] = 0x7fffffff;
  param_1[0xcb] = uVar3;
  param_1[199] = 0x80000001;
  *(unsigned char *)(param_1 + 0xcc) = 0;
  fn_827B3DB8(param_1 + 0xcd);
  fn_827B5460((double)lbl_82002C5C,(double)lbl_82016298,(double)lbl_8201629C,param_1 + 0xe8);
  param_1[0x1a8] = 0x400;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  fn_827B83E8(param_1 + 0x1c4);
  param_1[0x1e7] = 0;
  puVar4 = param_1 + 0xd;
  lVar5 = 0x20;
  do {
    puVar4[1] = 0;
    puVar4 = puVar4 + 5;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}

