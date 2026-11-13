extern unsigned int *auStack_48;
extern int fn_8265C940();
extern int fn_829EC420();
extern int fn_829EC538();
extern int fn_82A1E658();
extern int fn_82A29DE8();
extern int fn_82A2A108();
extern int fn_82A2B4B8();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_829E9528(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int aiStack_50 [2];
  unsigned int auStack_48 [18];
  
  uVar5 = 0;
  lVar1 = fn_82A29DE8(param_2,0xffffffff80000000,0,0,3,0,0);
  if ((lVar1 == 0) || ((int)lVar1 == -1)) {
    uVar5 = 0xffffffff80070057;
  }
  auStack_48[0] = 0;
  if (-1 < (int)uVar5) {
    iVar3 = fn_82A2B4B8(lVar1,auStack_48);
    if ((iVar3 != 1) || (0 < (int)auStack_48[0])) {
      uVar5 = 0xffffffff80070057;
    }
    if (-1 < (int)uVar5) {
      lVar2 = fn_8265C940(0,0x209d0000);
      *(int *)(param_1 + 0x10) = (int)lVar2;
      if (lVar2 == 0) {
        uVar5 = 0xffffffff8007000e;
      }
      if (-1 < (int)uVar5) {
        iVar3 = fn_82A2A108(lVar1,lVar2,0,aiStack_50,0);
        if ((iVar3 != 1) || (aiStack_50[0] != 0)) {
          uVar5 = 0xffffffff80004005;
        }
        if (-1 < (int)uVar5) {
          *(unsigned __int64 *)(param_1 + 0x18) = (unsigned __int64)auStack_48[0] << 0x20;
          uVar4 = fn_829EC420(param_2,*(unsigned int *)(param_1 + 0x10),
                                    (unsigned __int64)auStack_48[0] << 0x20,param_3);
          *(unsigned int *)(param_1 + 0xc) = uVar4;
          goto LAB_829e9650;
        }
      }
    }
  }
  fn_829EC538(param_1 + 0x10);
LAB_829e9650:
  fn_82A1E658(lVar1);
  return uVar5;
}

