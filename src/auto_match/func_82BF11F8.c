extern unsigned int *auStack_30;
extern int fn_82BE1A10();
extern int fn_82BE1FF8();
extern int fn_82BE5240();
extern int fn_82BE5A90();
extern int fn_82BE8A38();
extern int fn_82BE8D50();
extern int fn_82BEB838();
extern int fn_82BF6D88();


void fn_82BF11F8(int param_1,int param_2)

{
  int iVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned int auStack_30 [12];
  
  if (*(int *)(param_2 + 0x14) == 0x54) {
    iVar1 = *(int *)(param_2 + 0x24);
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x10) = 0x18;
      fn_82BE5240(param_1,0x25f,0xffffffff820eb550,0);
    }
    else {
      auStack_30[0] = 0;
      iVar4 = fn_82BE5A90(param_2,auStack_30);
      if (iVar4 == 0) {
        fn_82BE5240(param_1,0x25a,0xffffffff820eb524);
        *(unsigned int *)(param_1 + 0x10) = 0x18;
      }
      else {
        if (*(int *)(param_1 + 0x38) != 0) {
          fn_82BE8D50();
        }
        uVar2 = thunk_FUN_82be5550(0x1c);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_82BF6D88(uVar2,auStack_30[0],iVar1);
        }
        *(int *)(param_1 + 0x38) = iVar4;
        if (iVar4 == 0) {
          *(unsigned int *)(param_1 + 0x10) = 0x18;
          fn_82BE5240(param_1,0x65,0xffffffff820eb4e0);
        }
        else {
          *(unsigned int *)(param_1 + 0x10) = 0x17;
          fn_82BE8A38(param_1);
          uVar5 = *(unsigned __int64 *)(param_2 + 0x38);
          uVar3 = fn_82BE1A10();
          fn_82BE1FF8(uVar3,iVar1,uVar5);
        }
      }
    }
  }
  fn_82BEB838(param_1,param_2);
  return;
}

