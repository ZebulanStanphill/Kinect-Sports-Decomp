extern int fn_82549960();
extern int fn_825603C8();
extern int fn_82561778();
extern int fn_8265C9E0();
extern unsigned int lbl_82195E18;
extern unsigned int lbl_82195E1C;
extern unsigned int lbl_82195E20;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C3150;
extern unsigned int lbl_831C3158;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_824F6278(int param_1,int param_2)

{
  int in_r0;
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  stack_pair_40.first = lbl_82195E18;
  stack_pair_40.second = lbl_82195E1C;
  uStack_38 = lbl_82195E20;
  uStack_34 = 0;
  fn_82561778(param_1 + 0x80,0xffffffff821c1ff8,2);
  fn_825603C8(0,param_1 + 0x80,1);
  *(unsigned int *)(param_1 + 0x150) = 1;
  puVar3 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
  uVar2 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar2;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  uVar1 = fn_8265C9E0(0x200);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82549960(uVar1,param_2 + 0xa4,0,0,0,0);
  }
  *(unsigned int *)(param_1 + 0x200) = uVar2;
  uVar1 = fn_8265C9E0(0x200);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82549960(uVar1,param_2 + 0xa8,0,0,0,0);
  }
  *(unsigned int *)(param_1 + 0x204) = uVar2;
  uVar7 = ltcg_pool_0_0f;
  puVar3 = (unsigned int *)(param_1 + 0x2b4);
  lVar6 = 2;
  *(unsigned int *)(param_1 + 0x218) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x214) = uVar7;
  *(unsigned int *)(param_1 + 0x20c) = uVar7;
  *(unsigned int *)(param_1 + 0x208) = uVar7;
  *(unsigned int *)(param_1 + 0x2b0) = 0xffffffff;
  uVar2 = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x2b4) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x21c) = uVar7;
  *(unsigned int *)(param_1 + 0x210) = 0;
  *(unsigned int *)(param_1 + 0x220) = uVar7;
  *(unsigned int *)(param_1 + 0x70) = 1;
  *(unsigned int *)(param_1 + 0x224) = uVar7;
  *(unsigned int *)(param_1 + 0x2e4) = 0;
  *(unsigned int *)(param_1 + 0x2dc) = uVar7;
  *(unsigned int *)(param_1 + 0x33c) = 0;
  *(unsigned int *)(param_1 + 0x2e0) = uVar7;
  *(unsigned int *)(param_1 + 0x344) = 0;
  *(unsigned int *)(param_1 + 0x2fc) = uVar7;
  iVar5 = 0;
  *(unsigned int *)(param_1 + 0x2f8) = uVar7;
  *(unsigned int *)(param_1 + 0x314) = uVar7;
  *(unsigned int *)(param_1 + 0x2e8) = uVar7;
  *(unsigned int *)(param_1 + 0x2ec) = uVar7;
  *(unsigned int *)(param_1 + 0x2f4) = uVar7;
  *(unsigned int *)(param_1 + 0x318) = uVar7;
  *(unsigned int *)(param_1 + 0x31c) = uVar7;
  *(unsigned int *)(param_1 + 800) = uVar7;
  *(unsigned int *)(param_1 + 0x324) = uVar7;
  *(unsigned int *)(param_1 + 0x328) = uVar7;
  *(unsigned int *)(param_1 + 0x32c) = uVar7;
  *(unsigned int *)(param_1 + 0x330) = uVar7;
  *(unsigned int *)(param_1 + 0x334) = uVar7;
  *(unsigned int *)(param_1 + 0x338) = uVar7;
  *(unsigned int *)(param_1 + 0x340) = uVar7;
  *(unsigned int *)(param_1 + 0x2f0) = uVar7;
  *(unsigned int *)(param_1 + 0x310) = uVar2;
  *(unsigned int *)(param_1 + 0x348) = uVar7;
  do {
    puVar3[3] = *(unsigned int *)((int)&lbl_831C3150 + iVar5);
    puVar4 = (unsigned int *)((int)&lbl_831C3158 + iVar5);
    iVar5 = iVar5 + 4;
    puVar3 = puVar3 + 4;
    *puVar3 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(unsigned int *)(param_1 + 0x304) = 0;
  *(unsigned int *)(param_1 + 0x300) = 0;
  puVar4 = (unsigned int *)(param_1 + 0x34c);
  puVar3 = (unsigned int *)(param_2 + 0xb0);
  lVar6 = 10;
  *(unsigned int *)(param_1 + 0x308) = *(unsigned int *)(param_2 + 0xac);
  *(unsigned int *)(param_1 + 0x30c) = *(unsigned int *)(param_2 + 0xb0);
  do {
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return 1;
}

