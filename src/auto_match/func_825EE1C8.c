typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825D5E68();
extern int fn_825D5F20();
extern int fn_825D5FE8();
extern int fn_825D6090();
extern int fn_825D6140();
extern int fn_825EE970();
extern int fn_82622CC0();
extern int fn_826231D8();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();
extern unsigned int uStack_16c;


void fn_825EE1C8(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  bool bVar10;
  unsigned char auStack_1b0 [68];
  unsigned int uStack_16c;
  unsigned char auStack_160 [64];
  unsigned char auStack_120 [64];
  unsigned char auStack_e0 [80];
  unsigned char auStack_90 [144];
  
  piVar2 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar2;
  if (*(char *)(*(int *)(param_1 + 4) + 0xbdc) == '\0') {
    fn_825C7348(1);
    uVar5 = fn_825C7348(0);
    fn_82623298(piVar2,uVar5);
  }
  else {
    fn_825C7348(3);
    uVar5 = fn_825C7348(2);
    fn_826231D8(piVar2,uVar5);
  }
  fn_82622CC0(param_1,piVar2);
  fn_82639EA8(iVar1,((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar1 + 0x2f14) = 1;
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  uVar6 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  uVar6 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x20800;
  fn_825402B0(auStack_e0,*(unsigned int *)(param_1 + 0x18),0x40,
                  *(unsigned int *)(*(int *)(param_1 + 4) + 0xae4),*(unsigned int *)(param_1 + 0x10),1,0
                 );
  fn_825402B0(auStack_90,*(unsigned int *)(param_1 + 0x18),8,
                  *(unsigned int *)(*(int *)(param_1 + 4) + 0xae4),*(unsigned int *)(param_1 + 0x10));
  fn_825402B0(auStack_1b0,*(unsigned int *)(param_1 + 0x18),1,
                  *(unsigned int *)(*(int *)(param_1 + 4) + 0xae4),*(unsigned int *)(param_1 + 0x10));
  uStack_16c = 1;
  fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                    *(unsigned int *)(param_1 + 0x18));
  lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
          (unsigned __int64)*(unsigned int *)(param_1 + 4);
  fn_82F68CC0(auStack_160,lVar8 + 0x50,0x40);
  fn_82F68CC0(auStack_120,lVar8 + 0x90,0x40);
  fn_82540870(*(unsigned int *)(param_1 + 0x18),auStack_160);
  fn_82540B48(*(unsigned int *)(param_1 + 0x18),auStack_120);
  fn_82540438(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                  (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174,*(unsigned int *)(param_1 + 0x18),8);
  fn_825D6140(*(unsigned int *)(param_1 + 0x1c),iVar1);
  fn_825D5FE8(*(unsigned int *)(param_1 + 0x1c));
  uVar3 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar6 = (unsigned __int64)uVar3;
  if (0 < (int)uVar3) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8));
      puVar9 = (unsigned int *)(iVar4 + iVar7);
      iVar4 = **(int **)(iVar4 + iVar7);
      if (*(int *)(iVar4 + 0x90) == 0) {
        bVar10 = puVar9[4] != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        if (*(int *)(iVar4 + 0x1bc) != 0) {
          fn_825D5E68(*(unsigned int *)(param_1 + 0x1c),iVar1,8);
        }
        fn_825EE970(param_1,*puVar9,auStack_90,auStack_e0,auStack_1b0);
        if (*(int *)(*(int *)*puVar9 + 0x1bc) != 0) {
          fn_825D5F20(*(unsigned int *)(param_1 + 0x1c),iVar1,8);
        }
      }
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + 0x18;
    } while (uVar6 != 0);
  }
  fn_825D6090(*(unsigned int *)(param_1 + 0x1c),iVar1,0x40);
  fn_82623338(piVar2);
  return;
}

