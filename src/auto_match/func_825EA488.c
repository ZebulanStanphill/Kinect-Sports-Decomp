extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_ec;
extern unsigned int fStack_fc;
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_8257FF90();
extern int fn_825C7348();
extern int fn_825C73C8();
extern int fn_825EA908();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263DE70();
extern int fn_8263FB38();
extern int memcpy();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_100;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_825EA488(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_134;
  float fStack_130;
  float fStack_12c;
  struct { unsigned int first; unsigned int second; } stack_pair_120;

  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned char auStack_110 [16];
  unsigned int uStack_100;
  float fStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f0;
  float fStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned char auStack_d0 [64];
  unsigned char auStack_90 [144];
  
  iVar7 = *(int *)(param_1 + 4);
  piVar4 = *(int **)((*(unsigned int *)(iVar7 + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar4;
  if (*(int *)(iVar7 + 0xbe0) == 0) {
    fn_82623298(piVar4,0,0);
  }
  else {
    uStack_118 = *(unsigned int *)(iVar7 + 0xae4);
    stack_pair_120.first = *(unsigned int *)(param_1 + 0x18);
    uStack_114 = *(unsigned int *)(param_1 + 0x10);
    stack_pair_120.second = 4;
    puVar6 = (unsigned int *)((unsigned int)(auStack_110 + in_r0) & 0xfffffff0);
    *puVar6 = in_register_000104b0;
    puVar6[1] = in_register_000104b4;
    puVar6[2] = in_register_000104b8;
    puVar6[3] = in_vr75;
    dVar9 = (double)ltcg_pool_0_0f;
    uStack_100 = 1;
    fStack_fc = ltcg_pool_0_0f;
    uStack_f8 = 0;
    fStack_ec = ltcg_pool_0_0f;
    uStack_f0 = 0xffffffff;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0xffffffff;
    uVar2 = *(unsigned int *)(param_1 + 4);
    memcpy(auStack_90,(unsigned __int64)uVar2 + 0xbf0,0x40);
    memcpy(auStack_d0,(unsigned __int64)uVar2 + 0xc30,0x40);
    **(int **)(param_1 + 0x18) = iVar1;
    fn_82540B48(*(unsigned int *)(param_1 + 0x18),auStack_d0);
    *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xabb8) = *(unsigned int *)(param_1 + 0x10);
    fn_82540870(*(unsigned int *)(param_1 + 0x18),auStack_90);
    fn_825C7348(7);
    uVar3 = fn_825C7348(6);
    fn_82623298(*(unsigned int *)
                       ((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1),uVar3);
    fn_82540438(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                      (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174,*(unsigned int *)(param_1 + 0x18),4);
    fStack_130 = (float)dVar9;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0x280;
    dVar8 = (double)lbl_821CA460;
    fStack_12c = lbl_821CA460;
    uStack_134 = 0x1e0;
    fn_82639EA8(iVar1,&uStack_140);
    *(unsigned int *)(iVar1 + 0x2f14) = 1;
    *(unsigned int *)(iVar1 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x30;
    uVar5 = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar5 | 0x20800;
    *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) & 0xfffffff7;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
    fn_8263DE70(dVar8,iVar1,0,0,0x11,0,uVar5,0,0);
    uVar2 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
    uVar5 = (unsigned __int64)uVar2;
    if (0 < (int)uVar2) {
      iVar7 = 0;
      do {
        puVar6 = (unsigned int *)
                 (*(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8)) + iVar7);
        if (puVar6[4] != 0) {
          fn_825EA908(param_1,*puVar6,&stack_pair_120.first);
        }
        uVar5 = uVar5 - 1;
        iVar7 = iVar7 + 0x18;
      } while (uVar5 != 0);
    }
    fn_8257FF90(*(unsigned int *)(**(int **)(param_1 + 4) + 0x7e4),&stack_pair_120.first,
                      *(unsigned int *)(param_1 + 0x10),iVar1,0);
    uVar3 = fn_825C73C8(dVar9,2);
    fn_8263FB38(iVar1,0,0,uVar3,0,0,0,0);
    piVar4 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  }
  fn_82623338(piVar4);
  return;
}

