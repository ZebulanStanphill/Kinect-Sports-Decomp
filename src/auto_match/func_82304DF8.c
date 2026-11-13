extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82304DF8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar1 = *(int *)(param_1 + 0xc);
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  uVar5 = ltcg_pool_0_0f;
  uVar4 = lbl_821CA460;
  puVar2 = (unsigned int *)(iVar1 + 0x90U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(unsigned int *)(param_1 + 0x44) = 0;
  uVar3 = lbl_82192604;
  *(unsigned int *)(param_1 + 0x60) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x40) = uVar5;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x54) = uVar4;
  *(unsigned int *)(param_1 + 0x58) = uVar5;
  *(unsigned int *)(param_1 + 0x5c) = uVar3;
  puVar2 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  return;
}

