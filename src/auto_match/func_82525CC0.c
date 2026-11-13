extern int fn_82522838();
extern int fn_82522CF8();
extern int fn_82532AD0();
extern int fn_82549798();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int lbl_8326B7D0;
extern unsigned int *lbl_832767CC;


void fn_82525CC0(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  __int64 lVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  
  lVar10 = (param_2 & 0x3fffffff) * 4;
  lVar12 = 0;
  do {
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
      if (lbl_832767CC == (int *)0x0) {
        fn_82522838();
      }
    }
    piVar3 = lbl_832767CC;
    if (*lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar4 = fn_82A1BB18();
    fn_8259C5D8(piVar3 + 2,1,lVar4 + 1);
    fn_82A1BB18();
    iVar5 = fn_8259A230();
    iVar5 = fn_8259C458(*(unsigned int *)(&lbl_8326B7D0 + iVar5 * 4));
    uVar9 = *(unsigned int *)(iVar5 + 0x28);
    *(unsigned int *)(iVar5 + 0x28) = 0x10;
    uVar6 = fn_82522CF8(iVar5,0x94);
    if (0x10 < uVar9) {
      uVar9 = 0x10;
    }
    *(unsigned int *)(iVar5 + 0x28) = uVar9;
    fn_82A1BB18();
    fn_8259C738(piVar3 + 2);
    iVar5 = (int)((lVar10 + lVar12 + 0x291U & 0xffffffff) << 2);
    *(unsigned int *)(iVar5 + (int)param_1) = uVar6;
    iVar1 = (int)((lVar10 + lVar12 + 0x2a1U & 0xffffffff) << 2);
    uVar6 = fn_82549798(0x11c0,0x10,4,0);
    *(unsigned int *)(iVar1 + (int)param_1) = uVar6;
    iVar7 = (**(int (***)())(*param_1 + 0xac))(param_1);
    iVar2 = (int)((lVar10 + lVar12 + 0x2c9U & 0xffffffff) << 2);
    puVar11 = (unsigned int *)(iVar2 + (int)param_1);
    if (iVar7 == 0) {
      *(unsigned int *)(iVar2 + (int)param_1) = 0;
    }
    else {
      uVar6 = fn_82549798(0x11c0,0x10,4,0);
      *puVar11 = uVar6;
    }
    uVar6 = fn_82532AD0(0x47,*(unsigned int *)(iVar5 + (int)param_1),
                              *(unsigned int *)(iVar1 + (int)param_1),*puVar11);
    uVar8 = lVar10 + 0x2b1 + lVar12;
    lVar12 = lVar12 + 1;
    *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + (int)param_1) = uVar6;
  } while ((int)lVar12 < 4);
  return;
}

