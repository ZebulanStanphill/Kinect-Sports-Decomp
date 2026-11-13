extern int fn_824AF940();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82192A60;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193CF4;
extern unsigned int lbl_82195988;
extern unsigned int lbl_8219598C;
extern unsigned int lbl_821C006C;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824AE8C0(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *param_1 = &lbl_821C006C;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_824AF940(param_1 + 1);
  param_1[0xc] = 0;
  param_1[0x1c] = 0;
  uVar7 = ltcg_pool_0_0f;
  uVar6 = lbl_82193CF4;
  uVar4 = lbl_82192A60;
  uVar2 = lbl_821916FC;
  param_1[0xe] = 1;
  uVar5 = lbl_82192F70;
  uVar3 = lbl_82191FC4;
  param_1[0xd] = uVar7;
  param_1[0x14] = uVar7;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar7;
  param_1[0x19] = uVar7;
  param_1[0x17] = uVar6;
  param_1[0x18] = uVar4;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar5;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar3 = lbl_8219598C;
  uVar2 = lbl_82195988;
  param_1[0x1d] = *(unsigned int *)(param_2 + 0x48);
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar2;
  param_1[0x20] = uVar3;
  return param_1;
}

