typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826BD6B0();
extern int fn_826BD758();
extern int fn_826E96C8();
extern int fn_82F6B580();
extern int fn_82F6B818();
extern unsigned int lbl_831E7E64;


void fn_826E9740(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  unsigned char auStack_40 [64];
  
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  uVar5 = 0xffffffff821c42ec;
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 2) != 0) {
        uVar5 = 0xffffffff8200d780;
      }
    }
    else if ((uVar1 & 1) == 0) {
      uVar5 = 0xffffffff8200d784;
    }
    else {
      uVar5 = 0xffffffff8200d788;
    }
  }
  else if ((uVar1 & 1) == 0) {
    uVar5 = 0xffffffff821c42f0;
  }
  else {
    uVar5 = 0xffffffff8200d78c;
  }
  lVar2 = fn_826BD758(((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0xfffffffc) + 8,0xffffffffffffffff)
  ;
  uVar3 = fn_8267B890(lbl_831E7E64,(lVar2 + 1U & 0x7fffffff) << 1,0);
  fn_826BD6B0(uVar3,((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0xfffffffc) + 8,0xffffffffffffffff);
  fn_826BD6B0(auStack_40,uVar5,0xffffffffffffffff);
  fn_82F6B818((int *)(param_1 + 0x10),uVar3,auStack_40);
  fn_8267BE38(uVar3);
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82F6B580();
  }
  bVar6 = *(int *)(param_1 + 0x10) != 0;
  *(bool *)(param_1 + 0xc) = bVar6;
  if (bVar6) {
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  else {
    uVar4 = fn_826E96C8();
    *(unsigned int *)(param_1 + 0x18) = uVar4;
  }
  *(unsigned int *)(param_1 + 0x1c) = 0;
  return;
}

