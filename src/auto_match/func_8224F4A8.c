extern int fn_8224F398();
extern int fn_82520D38();
extern int fn_8265C9E0();
extern unsigned int lbl_82197E2C;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8224F4A8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  fn_82520D38();
  *param_1 = &lbl_82197E2C;
  iVar2 = fn_8265C9E0(0x40);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8224F398();
  }
  param_1[10] = uVar3;
  puVar4 = (unsigned int *)fn_8265C9E0(100);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    fn_8224F398(puVar4 + 3);
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    *puVar4 = 0;
    *(unsigned char *)(puVar4 + 1) = 0;
    puVar4[2] = 1;
    *(unsigned char *)(puVar4 + 0x13) = 0;
    *(unsigned char *)((int)puVar4 + 0x4d) = 0;
    puVar4[0x14] = 0;
    *(unsigned char *)(puVar4 + 0x15) = 0;
    puVar4[0x18] = 0;
  }
  param_1[0xb] = puVar4;
  param_1[0xc] = *(unsigned int *)(param_2 + 0x48);
  uVar1 = ltcg_pool_0_0f;
  param_1[0xd] = *(unsigned int *)(param_2 + 0x4c);
  param_1[0xe] = *(unsigned int *)(param_2 + 0x50);
  param_1[0xf] = *(unsigned int *)(param_2 + 0x50);
  param_1[0x11] = *(unsigned int *)(param_2 + 0x54);
  uVar3 = *(unsigned int *)(param_2 + 0x58);
  *(unsigned char *)(param_1 + 0x10) = 0;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  return param_1;
}

