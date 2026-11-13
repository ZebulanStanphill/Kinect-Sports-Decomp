extern unsigned int *auStack_120;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_8257FF90();
extern int fn_825C7348();
extern int fn_825C73C8();
extern int fn_825EA908();
extern int fn_82622CC0();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263DE70();
extern int fn_8263FB38();
extern int fn_82F68CC0();
extern unsigned int lbl_8218C96C;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825EEAD8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int iVar8;
  double dVar9;
  unsigned char auStack_120 [80];
  unsigned char auStack_d0 [64];
  unsigned char auStack_90 [144];
  
  piVar3 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar3;
  fn_825C7348(5);
  uVar5 = fn_825C7348(4);
  fn_82623298(piVar3,uVar5);
  fn_82622CC0(param_1,piVar3);
  fn_82639EA8(iVar1,((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar1 + 0x2f14) = 1;
  uVar4 = lbl_8218C96C;
  dVar9 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  uVar6 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x20800;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  *(unsigned int *)(iVar1 + 0x2904) = uVar4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x8000000;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) & 0xfffffff8 | 4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x200;
  fn_8263DE70(dVar9,iVar1,0,0,0x11,0xffffffffff000000,uVar6,0,0);
  fn_825402B0(auStack_120,*(unsigned int *)(param_1 + 0x18),0x10,
                  *(unsigned int *)(*(int *)(param_1 + 4) + 0xae4),*(unsigned int *)(param_1 + 0x10),1,0
                 );
  uVar2 = *(unsigned int *)(param_1 + 4);
  fn_82F68CC0(auStack_90,(unsigned __int64)uVar2 + 0x9c0,0x40);
  fn_82F68CC0(auStack_d0,(unsigned __int64)uVar2 + 0x90,0x40);
  fn_82540870(*(unsigned int *)(param_1 + 0x18),auStack_90);
  fn_82540B48(*(unsigned int *)(param_1 + 0x18),auStack_d0);
  fn_82540438(0,*(unsigned int *)(param_1 + 0x18),0x10);
  uVar2 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar6 = (unsigned __int64)uVar2;
  if (0 < (int)uVar2) {
    iVar8 = 0;
    do {
      puVar7 = (unsigned int *)
               (*(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8)) + iVar8);
      if (puVar7[4] != 0) {
        fn_825EA908(param_1,*puVar7,auStack_120);
      }
      uVar6 = uVar6 - 1;
      iVar8 = iVar8 + 0x18;
    } while (uVar6 != 0);
  }
  fn_8257FF90(*(unsigned int *)(**(int **)(param_1 + 4) + 0x7e4),auStack_120,
                  *(unsigned int *)(param_1 + 0x10),iVar1,*(unsigned int *)(param_1 + 0x1c));
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) & 0xfffffff7;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  uVar5 = fn_825C73C8(dVar9,0);
  fn_8263FB38(iVar1,0,0,uVar5,0,0,0,0);
  fn_82623338(piVar3);
  return;
}

