extern unsigned int *auStack_50;
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_82637B30();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DF30();
extern int fn_8263FB38();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_821CE890;
extern unsigned int lbl_821CEA10;


void fn_825CC628(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_50 [80];
  
  iVar1 = *(int *)(param_2 + 0x3148);
  if (iVar1 != 0) {
    fn_8262FE50(iVar1);
  }
  fn_8263A1B8(param_2,0,*(unsigned int *)(param_1 + 0x68));
  iVar2 = *(int *)(param_2 + 0x3158);
  if (iVar2 != 0) {
    fn_8262FE50(iVar2);
  }
  fn_8263A508(param_2,0);
  *(unsigned int *)(param_2 + 0x2f08) = 0xf;
  *(unsigned int *)(param_2 + 0x28dc) =
       (-(unsigned int)(*(int *)(param_2 + 0x314c) != 0) & 0xf) << 4 |
       *(unsigned int *)(param_2 + 0x28dc) & 0xffffff0f;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x2000000000;
  *(unsigned int *)(param_2 + 0x2f0c) = 0xf;
  *(unsigned int *)(param_2 + 0x28dc) =
       (-(unsigned int)(*(int *)(param_2 + 0x3150) != 0) & 0xf) << 8 |
       *(unsigned int *)(param_2 + 0x28dc) & 0xfffff0ff;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x2000000000;
  uVar5 = fn_82637B30(param_2,0);
  puVar3 = (unsigned int *)((unsigned int)(&lbl_821CE890 + in_r0) & 0xfffffff0);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  dVar6 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(param_2 + 0x293c) = *(unsigned int *)(param_2 + 0x293c) & 0xfffffff7;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x40200;
  fn_8263DF30(dVar6,uVar5,1,0,auStack_50);
  fn_8263FB38(dVar6,param_2,0,0,*(unsigned int *)(param_1 + 0x5c),0,0,0,0);
  puVar3 = (unsigned int *)((unsigned int)(&lbl_821CEA10 + in_r0) & 0xfffffff0);
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fn_8263DF30(dVar6,param_2,1,0,auStack_50);
  fn_8263FB38(dVar6,param_2,0,0,*(unsigned int *)(param_1 + 0x58),0,0,0,0);
  fn_8263FB38(dVar6,param_2,0,0,*(unsigned int *)(param_1 + 0x60),0,0,0,0);
  fn_8263A1B8(param_2,0,iVar1);
  if (iVar1 != 0) {
    fn_8262FEC8(iVar1);
  }
  fn_8263A508(param_2,iVar2);
  if (iVar2 != 0) {
    fn_8262FEC8(iVar2);
  }
  *(float *)(param_1 + 0xa8) =
       *(float *)(*(int *)(param_1 + 0x54) + 0x6c) + *(float *)(*(int *)(param_1 + 0x54) + 0x68);
  *(unsigned int *)(param_1 + 200) = 1;
  *(unsigned int *)(param_1 + 0xc4) = 1;
  return;
}

