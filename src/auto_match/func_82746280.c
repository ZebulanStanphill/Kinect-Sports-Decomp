extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82743C08();
extern int fn_82745128();
extern int fn_827451A8();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


void fn_82746280(int param_1)

{
  unsigned int uVar1;
  char cVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar5;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    cVar4 = fn_82695468(param_1,0x11);
    if (cVar4 == '\0') {
      fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    }
    else {
      lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
        lVar5 = 0;
      }
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      lVar3 = fn_82696958(uVar2,uVar1);
      if (lVar3 == 0) {
        fn_82745128(lVar5,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff831f1308);
      }
      else {
        dStack_40 = lbl_82005710;
        dStack_38 = lbl_82005710;
        dStack_30 = lbl_82005710;
        dStack_28 = lbl_82005710;
        fn_827459D8(lVar5,*(unsigned int *)(param_1 + 0x18),&dStack_40);
        fn_82743C08(*(unsigned int *)(param_1 + 0x18),lVar3,&dStack_50);
        dStack_40 = dStack_40 - dStack_50;
        dStack_30 = dStack_30 + dStack_50;
        dStack_38 = dStack_38 - dStack_48;
        dStack_28 = dStack_28 + dStack_48;
        fn_827451A8(lVar5,*(unsigned int *)(param_1 + 0x18),&dStack_40);
      }
    }
  }
  return;
}

