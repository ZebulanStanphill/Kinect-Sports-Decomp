extern int fn_82441BD0();
extern int fn_82442578();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917C4;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821B8268;
extern unsigned int lbl_821B9B00;
extern unsigned int lbl_821B9B14;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82450F88(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  uVar1 = *(unsigned int *)(param_2 + 0x13c);
  fn_82441BD0(param_1,param_2 + 0x24,param_2 + 0x134,
                    (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 300) + 0x174) + 8);
  param_1[3] = 0;
  param_1[2] = &lbl_821B8268;
  param_1[4] = 0;
  *param_1 = &lbl_821B9B00;
  param_1[2] = &lbl_821B9B14;
  uVar5 = fn_8265C9E0(0x1b0);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82442578(uVar5,param_2 + 0x138);
  }
  param_1[5] = iVar6;
  *(unsigned int *)(iVar6 + 0x94) = uVar1;
  param_1[6] = lbl_821916FC;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = lbl_8218E8E8;
  param_1[10] = 0;
  uVar4 = ltcg_pool_0_0f;
  uVar3 = lbl_82192480;
  *(unsigned char *)(param_1 + 0xc) = 0;
  uVar2 = lbl_821917C4;
  *(unsigned char *)(param_1 + 0xe) = 0;
  param_1[0xb] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar4;
  param_1[0x15] = 0x2ee;
  uVar1 = *(unsigned int *)(param_2 + 0x140);
  param_1[0x1a] = 0;
  uVar2 = lbl_821CA460;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  return param_1;
}

