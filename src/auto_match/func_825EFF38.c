extern unsigned int *auStack_100;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_825C7348();
extern int fn_825C73C8();
extern int fn_825D5E68();
extern int fn_825D6140();
extern int fn_82622CC0();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_8263CBB0();
extern int fn_82F68CC0();


void fn_825EFF38(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned char auStack_100 [64];
  unsigned char auStack_c0 [64];
  unsigned char auStack_80 [128];
  
  piVar2 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar2;
  if (*(char *)(*(int *)(param_1 + 4) + 0xbdc) != '\0') {
    fn_82623298(piVar2,0,0);
    fn_82623338(piVar2);
    return;
  }
  fn_825C7348(1);
  uVar3 = fn_825C7348(0);
  fn_82623298(piVar2,uVar3);
  fn_82622CC0(param_1,piVar2);
  fn_82639EA8(iVar1,((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                          (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
  *(unsigned int *)(iVar1 + 0x2f14) = 1;
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  uVar4 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x20800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
  uVar4 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar4 | 0x20800;
  uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0xae4) + 2;
  fn_825402B0(auStack_80,*(unsigned int *)(param_1 + 0x18),4,
                  uVar4 + ((__int64)((int)uVar4 >> 2) +
                           (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 3) != 0) & 0x3fffffff) * -4,
                  *(unsigned int *)(param_1 + 0x10),1,0);
  lVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
          (unsigned __int64)*(unsigned int *)(param_1 + 4);
  fn_82F68CC0(auStack_c0,lVar5 + 0x50,0x40);
  fn_82F68CC0(auStack_100,lVar5 + 0x90,0x40);
  fn_82540870(*(unsigned int *)(param_1 + 0x18),auStack_c0);
  fn_82540B48(*(unsigned int *)(param_1 + 0x18),auStack_100);
  fn_82540438(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                  (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174,*(unsigned int *)(param_1 + 0x18),4);
  fn_825D6140(*(unsigned int *)(param_1 + 0x1c),iVar1);
  fn_825D5E68(*(unsigned int *)(param_1 + 0x1c));
  uVar3 = fn_825C73C8(0);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(iVar1,10,uVar3);
}

