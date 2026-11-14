extern int fn_82606610();
extern int fn_826066A0();
extern int XMemSet();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_821CE890;
extern unsigned int lbl_831BF720;
extern unsigned int lbl_831BF728;


void fn_82606730(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x48) = 1;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  fn_82606610();
  fn_826066A0(param_1);
  *(unsigned int *)(param_1 + 0x88) = lbl_831BF720;
  uVar3 = lbl_831BF728;
  uVar2 = ltcg_pool_0_0f;
  puVar4 = (unsigned int *)((unsigned int)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  lVar5 = 6;
  puVar4 = (unsigned int *)(param_1 + 0x144);
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(unsigned int *)(param_1 + 0x8c) = uVar3;
  *(unsigned int *)(param_1 + 0x140) = 1;
  *(unsigned int *)(param_1 + 0x114) = uVar2;
  *(unsigned int *)(param_1 + 0x144) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x118) = uVar2;
  *(unsigned int *)(param_1 + 0x11c) = uVar2;
  *(unsigned int *)(param_1 + 0x124) = uVar2;
  puVar1 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1 = (unsigned int *)(param_1 + 0x130U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned short *)(param_1 + 0xb0) = 0;
  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_1 + 0xa0);
  XMemSet(param_1 + 0x160,0,0x100);
  return;
}

