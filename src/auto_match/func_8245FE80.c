extern int fn_82514888();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1318;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8245FE80(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  
  uVar3 = ltcg_pool_0_0f;
  lVar5 = 2;
  lbl_831D1318 = ((((unsigned __int64)(lbl_831D1318)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(3)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  piVar4 = (int *)(*(int *)(param_1 + 0x50) + 0x34);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      puVar2 = (unsigned int *)((unsigned int)(piVar4 + -9) & 0xfffffff0);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(unsigned int *)(iVar1 + 0x30) = 0;
      *(unsigned int *)(iVar1 + 0x20) = uVar3;
      puVar2 = (unsigned int *)(iVar1 + 0x10U & 0xfffffff0);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
    }
    piVar4 = piVar4 + 0x10;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  uStack_18 = 0;
  fn_82514888(&stack_pair_20.first);
  return;
}

