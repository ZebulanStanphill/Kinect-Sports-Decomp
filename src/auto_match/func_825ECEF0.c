extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern int fn_8252DCF8();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540C50();
extern int fn_825444B8();
extern int fn_8257DE30();
extern int fn_825C7348();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82637B30();
extern int fn_82639EA8();
extern int memcpy();
extern unsigned int iStack_104;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B370;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_825ECEF0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int in_r0;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  unsigned int uStack_108;
  int iStack_104;
  unsigned char auStack_100 [16];
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned char auStack_c0 [64];
  unsigned char auStack_80 [128];

  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 4);
  iVar12 = iVar4 * 0x200 + iVar5;
  memcpy(auStack_80,iVar12 + 0x50,0x40);
  memcpy(auStack_c0,iVar12 + 0x90,0x40);
  uStack_ec = ltcg_pool_0_0f;
  uStack_108 = *(unsigned int *)(iVar5 + 0xae4);
  stack_pair_110.first = *(unsigned int *)(param_1 + 0x10);
  piVar7 = *(int **)((*(unsigned int *)(iVar5 + 0xaf0) % 3 + 5) * 4 + param_1);
  iVar5 = *piVar7;
  stack_pair_110.second = 4;
  puVar9 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar9 = in_register_000104b0;
  puVar9[1] = in_register_000104b4;
  puVar9[2] = in_register_000104b8;
  puVar9[3] = in_vr75;
  uStack_dc = uStack_ec;
  uStack_f0 = 1;
  uStack_e8 = 0;
  uStack_e0 = 0xffffffff;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0xffffffff;
  **(int **)(param_1 + 0x10) = iVar5;
  iStack_104 = iVar4;
  fn_82540870(*(unsigned int *)(param_1 + 0x10),auStack_80);
  fn_82540B48(*(unsigned int *)(param_1 + 0x10),auStack_c0);
  fn_82540C50(*(unsigned int *)(param_1 + 0x10));
  iVar4 = *(int *)(param_1 + 0x10);
  iVar12 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4);
  uVar1 = *(unsigned int *)(iVar12 + 0x160);
  uVar2 = *(unsigned int *)(iVar12 + 0x164);
  uVar3 = *(unsigned int *)(iVar12 + 0x16c);
  *(unsigned int *)(iVar4 + 0xabcc) = *(unsigned int *)(iVar12 + 0x168);
  *(unsigned int *)(iVar4 + 0xabd0) = uVar3;
  *(unsigned int *)(iVar4 + 0xabd4) = uVar2;
  *(unsigned int *)(iVar4 + 0xabd8) = uVar1;
  fn_825C7348(1);
  uVar8 = fn_825C7348(0);
  fn_82623298(piVar7,uVar8);
  fn_82639EA8(iVar5,((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar5 + 0x2f14) = 0;
  *(unsigned int *)(iVar5 + 0x2934) = *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x20800;
  *(unsigned int *)(iVar5 + 0x2934) = *(unsigned int *)(iVar5 + 0x2934) & 0xfffffffb;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x800;
  *(unsigned int *)(iVar5 + 0x29c0) = *(unsigned int *)(iVar5 + 0x29c0) | 1;
  *(unsigned __int64 *)(iVar5 + 0x20) = *(unsigned __int64 *)(iVar5 + 0x20) | 0x800000000;
  fn_82637B30(iVar5,0);
  puVar9 = &lbl_8326B370;
  *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) & 0xfffffff7;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40200;
  *(unsigned int *)(iVar5 + 0x2948) = *(unsigned int *)(iVar5 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40;
  uVar11 = *(unsigned int *)(param_1 + 4);
  uVar10 = (unsigned __int64)uVar11;
  if (((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x7fffff) * 0x200 + uVar10 == -0x174) {
    uVar8 = 0xffffffff8326b090;
  }
  else {
    puVar9 = &lbl_8326B370;
    uVar8 = fn_825444B8();
    uVar11 = (unsigned int)uVar10;
  }
  fn_8252DCF8((double)*(float *)(uVar11 + 0xaf4),(double)*(float *)(uVar11 + 0xaf8),
                    (double)*(float *)(uVar11 + 0xafc),(double)*(float *)(uVar11 + 0xb00),
                    (double)*(float *)(uVar11 + 0xb04),(double)*(float *)(uVar11 + 0xb08),iVar5,
                    uVar8,puVar9[0x2d]);
  *(unsigned int *)(iVar5 + 0x29c0) = *(unsigned int *)(iVar5 + 0x29c0) & 0xfffffffe;
  *(unsigned __int64 *)(iVar5 + 0x20) = *(unsigned __int64 *)(iVar5 + 0x20) | 0x800000000;
  *(unsigned int *)(iVar5 + 0x2948) = *(unsigned int *)(iVar5 + 0x2948) & 0xfffffff8 | 2;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40;
  *(unsigned int *)(iVar5 + 0x293c) = *(unsigned int *)(iVar5 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar5 + 0x10) | 0x40200;
  piVar6 = *(int **)(param_1 + 4);
  fn_8257DE30(*(unsigned int *)(*piVar6 + 0xb8),3,&stack_pair_110.first,piVar6[0x2ba],
                    piVar6 + *(int *)(param_1 + 8) * 0x80 + 0x5d);
  fn_82623338(piVar7);
  return;
}
