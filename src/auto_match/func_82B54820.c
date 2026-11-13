extern int fn_82AA66A8();
extern int fn_82B462A8();
extern int fn_82B4E578();
extern int fn_82B54048();


void fn_82B54820(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(iVar1 + 0x10);
  if ((iVar3 != *(int *)(param_1 + 0x10)) && (*(unsigned int *)(iVar1 + 0x14) != 0)) {
    if (*(int *)(iVar3 * 0x28 + *(int *)(param_1 + 0xc) + 0xc) != 0) {
      uVar2 = fn_82B462A8();
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdc0,uVar2);
    }
    if (0x3fff < *(unsigned int *)(iVar1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdbf);
    }
    fn_82B54048(param_1,iVar3,param_2,iVar1,3,*(unsigned int *)(param_1 + 0x18));
    iVar3 = *(int *)(iVar1 + 0x10) * 0x28;
    *(unsigned int *)(iVar3 + *(int *)(param_1 + 0xc)) =
         *(unsigned int *)(iVar3 + *(int *)(param_1 + 0xc)) & 0xfffffff8 | 2;
    iVar3 = *(int *)(iVar1 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar3 + 4) = *(unsigned int *)(iVar3 + 4) | 0x4000000;
    iVar3 = *(int *)(iVar1 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(unsigned int *)(iVar3 + 8) = *(unsigned int *)(iVar3 + 8) & 0xfff80000 | *(unsigned int *)(param_1 + 0x2f0) & 0x7ffff;
    if (*(int *)(iVar1 + 0x34) != 0) {
      fn_82B4E578(param_1,param_3,*(unsigned int *)(iVar1 + 0x10));
    }
  }
  return;
}

