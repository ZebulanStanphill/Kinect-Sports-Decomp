extern int fn_8265C9E0();
extern int fn_82F53CA0();
extern unsigned int lbl_821915FC;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824E10D0(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = lbl_821915FC;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = ltcg_pool_0_0f;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = *(unsigned int *)(param_2 + 0x30);
  param_1[0xd] = *(unsigned int *)(param_2 + 0x48);
  param_1[0xe] = *(unsigned int *)(param_2 + 0x4c);
  param_1[0xf] = *(unsigned int *)(param_2 + 0x34);
  param_1[0x10] = *(unsigned int *)(param_2 + 0x38);
  param_1[0x11] = *(unsigned int *)(param_2 + 0x3c);
  param_1[0x12] = *(unsigned int *)(param_2 + 0x40);
  param_1[0x13] = *(unsigned int *)(param_2 + 0x44);
  param_1[0x14] = *(unsigned int *)(param_2 + 0x50);
  param_1[0x15] = *(unsigned int *)(param_2 + 0x54);
  param_1[0x16] = *(unsigned int *)(param_2 + 0x5c);
  uVar5 = *(unsigned int *)(param_2 + 0x58);
  param_1[0x18] = uVar3;
  param_1[0x1a] = uVar2;
  param_1[0x17] = uVar5;
  param_1[0x19] = 2;
  param_1[0x20] = 0;
  iVar4 = fn_8265C9E0(0xae0);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_82F53CA0();
  }
  param_1[0x22] = uVar5;
  param_1[0x23] = 0;
  param_1[0x2c] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x24) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x28) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return param_1;
}

