extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_827459D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82745B00(int param_1)

{
  unsigned char *puVar1;
  unsigned __int64 uVar2;
  char cVar4;
  __int64 lVar3;
  unsigned char uVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*(int *)(param_1 + 0x1c) < 2) {
    puVar1 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 0;
  }
  else {
    uVar2 = fn_826957D0(param_1,0);
    fn_82695DA0(auStack_50,uVar2);
    uVar2 = fn_826957D0(param_1,1);
    fn_82695DA0(auStack_60,uVar2);
    cVar4 = fn_82695468(param_1,0x11);
    if (cVar4 == '\0') {
      fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    }
    else {
      lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
        lVar3 = 0;
      }
      dStack_40 = lbl_82005710;
      dStack_38 = lbl_82005710;
      dStack_30 = lbl_82005710;
      dStack_28 = lbl_82005710;
      fn_827459D8(lVar3,*(unsigned int *)(param_1 + 0x18),&dStack_40);
      dVar6 = (double)fn_826972E0(auStack_50,*(unsigned int *)(param_1 + 0x18));
      dVar7 = (double)fn_826972E0(auStack_60,*(unsigned int *)(param_1 + 0x18));
      if (dVar6 == dStack_30) {
        dVar6 = dVar6 + lbl_82005758;
      }
      if (dVar7 == dStack_28) {
        dVar7 = dVar7 + lbl_82005758;
      }
      if ((((dStack_30 < dVar6) || (dVar6 < dStack_40)) || (dStack_28 < dVar7)) ||
         (uVar5 = 1, dVar7 < dStack_38)) {
        uVar5 = 0;
      }
      puVar1 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar1);
      puVar1[4] = uVar5;
      *puVar1 = 2;
    }
    fn_82696330(auStack_60);
    fn_82696330(auStack_50);
  }
  return;
}

