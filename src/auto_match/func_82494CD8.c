extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821BEBAC;
extern unsigned int lbl_821BEEE0;
extern unsigned int lbl_821BEEFC;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_30;
extern unsigned __int64 storeVectorElementWordIndexed();


__int64 fn_82494CD8(__int64 param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned short uStack_30;
  
  puVar4 = (unsigned int *)param_1;
  *puVar4 = &lbl_821BEEFC;
  puVar4[5] = 0;
  puVar4[4] = &lbl_821BEBAC;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(puVar4 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  lVar6 = param_1 + 0x18;
  puVar4[0x12] = 0;
  *(unsigned char *)(puVar4 + 0x14) = 0;
  *(unsigned char *)((int)puVar4 + 0x51) = 0;
  *(unsigned char *)((int)puVar4 + 0x52) = 0;
  puVar4[0x15] = 0;
  uVar3 = (unsigned int)lVar6;
  uVar5 = storeVectorElementWordIndexed(in_vs45,0,lVar6);
  *(unsigned int *)(uVar3 & 0xfffffffc) = uVar5;
  uVar5 = storeVectorElementWordIndexed(in_vs44,lVar6,4);
  *(unsigned int *)(uVar3 + 4 & 0xfffffffc) = uVar5;
  uVar5 = storeVectorElementWordIndexed(in_vs43,lVar6,8);
  *(unsigned int *)(uVar3 + 8 & 0xfffffffc) = uVar5;
  *(unsigned short *)(puVar4 + 0x18) = uStack_30;
  puVar4[0x1a] = 0;
  uVar5 = fn_8248F890(0x70);
  puVar4[0x19] = uVar5;
  *(unsigned int *)uVar5 = uVar5;
  *(unsigned int *)(puVar4[0x19] + 4) = puVar4[0x19];
  uVar5 = lbl_821CA460;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x22] = uVar5;
  fn_82497430(param_1 + 0x60,8);
  puVar4[0x24] = param_2;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  *puVar4 = &lbl_821BEEE0;
  return param_1;
}

