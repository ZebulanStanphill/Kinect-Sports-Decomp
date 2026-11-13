extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82A1EFC0();
extern int fn_82FA5060();
extern int fn_830224F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_64;


unsigned __int64 fn_83024C50(int param_1,unsigned int param_2,unsigned short param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs37 [16];
  unsigned int in_register_000103f0;
  unsigned int uStack_64;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [80];
  
  uVar4 = fn_830224F0(param_1 + 0x80);
  *(unsigned int *)(param_1 + 0x70) = param_4;
  *(unsigned int *)(param_1 + 0x1c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x30) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x2c) = *(unsigned char *)(param_1 + 0x2c) & 0x3f;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  uVar3 = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned char *)(param_1 + 0x40) = *(unsigned char *)(param_1 + 0x40) & 0x3f;
  uVar2 = lbl_82002AE0;
  *(unsigned int *)(param_1 + 0x44) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  puVar7 = &uStack_64;
  *(unsigned char *)(param_1 + 0x54) = *(unsigned char *)(param_1 + 0x54) & 0x3f;
  lVar10 = 6;
  *(unsigned int *)(param_1 + 0x58) = 0xffffffff;
  puVar6 = (unsigned int *)(param_1 + 0x14c);
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned char *)(param_1 + 0x68) = *(unsigned char *)(param_1 + 0x68) & 0x3f;
  *(unsigned char *)(param_1 + 0x6c) = *(unsigned char *)(param_1 + 0x6c) & 0x3f;
  *(unsigned int *)(param_1 + 0x74) = 4;
  *(unsigned int *)(param_1 + 8) = uVar2;
  *(unsigned int *)(param_1 + 4) = uVar2;
  *(unsigned int *)(param_1 + 0xc) = uVar2;
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  *(unsigned int *)(param_1 + 0x14) = uVar3;
  *(unsigned int *)(param_1 + 0x18) = uVar3;
  altv300_21(in_vs32,in_vs37);
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  puVar1 = (unsigned int *)((int)auStack_60 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f0;
  puVar1[2] = in_register_000103f0;
  puVar1[3] = in_register_000103f0;
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar7;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = 0;
  for (uVar9 = param_2; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
    iVar8 = iVar8 + 1;
  }
  *(unsigned int *)(param_1 + 0x16c) = 0;
  *(unsigned int *)(param_1 + 0x170) = 0;
  *(unsigned int *)(param_1 + 0x168) = (unsigned int)param_3 * iVar8 * 4;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned short *)(param_1 + 0x10e) = 0;
  *(unsigned short *)(param_1 + 0x10c) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0x2b;
  *(unsigned int *)(param_1 + 0x108) = 0x11;
  uVar5 = fn_82FA5060(lbl_831BC770,*(unsigned int *)(param_1 + 0x168));
  if ((uVar5 & 0xffffffff) == 0) {
    uVar4 = 0x34;
  }
  else {
    fn_82A1EFC0(uVar5,0,*(unsigned int *)(param_1 + 0x168));
    *(int *)(param_1 + 0x100) = (int)uVar5;
    *(unsigned short *)(param_1 + 0x10c) = param_3;
    *(unsigned short *)(param_1 + 0x10e) = 0;
    *(unsigned int *)(param_1 + 0x104) = param_2;
    fn_82A1EFC0(param_1 + 0x110,0,0x40);
  }
  return uVar4;
}

