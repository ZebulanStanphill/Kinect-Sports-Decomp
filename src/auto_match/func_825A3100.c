extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82D8E4C0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_825A3100(int param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int aiStack_40 [4];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  iVar3 = *param_3;
  if (*param_3 == 0) {
    fn_82520158(0xffffffff821c7f8c,aiStack_40,0);
    iVar3 = aiStack_40[0];
  }
  aiStack_40[0] = iVar3;
  puVar4 = (unsigned int *)fn_8251F720(aiStack_40,0);
  fn_82D8E4C0(param_1,*puVar4);
  uStack_30 = ltcg_pool_0_0f;
  uStack_28 = ltcg_pool_0_0f;
  uStack_24 = ltcg_pool_0_0f;
  uStack_2c = puVar4[1];
  *(unsigned char *)(param_1 + 0xcd) = 2;
  *(unsigned char *)(param_1 + 0x28) = 1;
  puVar2 = (unsigned int *)((int)&uStack_30 + in_r0 & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar2 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(unsigned int *)(param_1 + 0x54) = puVar4[2];
  *(unsigned int *)(param_1 + 0x60) = puVar4[3];
  *(unsigned int *)(param_1 + 0x68) = puVar4[4];
  *(unsigned int *)(param_1 + 0xa8) = puVar4[5];
  *(unsigned int *)(param_1 + 0x98) = puVar4[6];
  uVar1 = puVar4[7];
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(unsigned int *)(param_1 + 0x9c) = uVar1;
  *(char *)(param_1 + 0xce) = '\x01' - (puVar4[8] == 0);
  *(char *)(param_1 + 0xcc) = '\x01' - (puVar4[9] == 0);
  *(char *)(param_1 + 0xd4) = '\x01' - (puVar4[10] == 0);
  *(char *)(param_1 + 0xa3) = '\x01' - (puVar4[0xb] == 0);
  *(unsigned int *)(param_1 + 0xd0) = puVar4[0xd];
  fn_8251FA58(puVar4);
  return;
}

