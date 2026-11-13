extern int fn_825444B8();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_8263FB38();
extern unsigned int lbl_82195C90;
extern unsigned int lbl_821CA460;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825D3A38(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  *(unsigned int *)(param_1 + 0x2948) = *(unsigned int *)(param_1 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x40;
  uVar2 = fn_82637BC0(param_1,0);
  uVar2 = fn_82637C50(uVar2,6);
  uVar2 = fn_82637CE0(uVar2,7);
  iVar3 = fn_82637B30(uVar2,1);
  uVar1 = lbl_82195C90;
  *(unsigned int *)(iVar3 + 0x293c) = *(unsigned int *)(iVar3 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x40200;
  *(unsigned int *)(iVar3 + 0x2904) = uVar1;
  *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x8000000;
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x2f14) = 1;
    *(unsigned int *)(param_1 + 0x2934) =
         (-(unsigned int)(*(int *)(param_1 + 0x3158) != 0) & 1) << 1 |
         *(unsigned int *)(param_1 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x20800;
    *(unsigned int *)(param_1 + 0x2934) = *(unsigned int *)(param_1 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x800;
    if ((param_3 & 0xffffffff) == 0) {
      uVar2 = 0xffffffff8326b090;
    }
    else {
      uVar2 = fn_825444B8(param_3);
    }
    fn_8263FB38((double)lbl_821CA460,param_1,0,0,uVar2,0,0,0,0);
  }
  else {
    *(unsigned int *)(iVar3 + 0x2f14) = 0;
    *(unsigned int *)(iVar3 + 0x2934) = *(unsigned int *)(iVar3 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x20800;
    *(unsigned int *)(iVar3 + 0x2934) = *(unsigned int *)(iVar3 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x800;
  }
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff8326b090;
  }
  else {
    uVar2 = fn_825444B8(param_3);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_1,1,uVar2,0x40000000);
}

