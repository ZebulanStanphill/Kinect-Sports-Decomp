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


void fn_825259A0(int *param_1)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int *piVar7;
  
  piVar7 = param_1 + 0x2c5;
  lVar6 = 4;
  do {
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
      if (lbl_832767CC == (int *)0x0) {
        fn_82522838();
      }
    }
    piVar1 = lbl_832767CC;
    if (*lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar2 = fn_82A1BB18();
    fn_8259C5D8(piVar1 + 2,1,lVar2 + 1);
    fn_82A1BB18();
    iVar3 = fn_8259A230();
    iVar3 = fn_8259C458(*(unsigned int *)(&lbl_8326B7D0 + iVar3 * 4));
    uVar5 = *(unsigned int *)(iVar3 + 0x28);
    *(unsigned int *)(iVar3 + 0x28) = 0x10;
    iVar4 = fn_82522CF8(iVar3,0x94);
    if (0x10 < uVar5) {
      uVar5 = 0x10;
    }
    *(unsigned int *)(iVar3 + 0x28) = uVar5;
    fn_82A1BB18();
    fn_8259C738(piVar1 + 2);
    piVar7[-0x3c] = iVar4;
    iVar3 = fn_82549798(0x11c0,0x10,4,0);
    piVar7[-0x38] = iVar3;
    iVar3 = (**(int (***)())(*param_1 + 0xac))(param_1);
    if (iVar3 == 0) {
      *piVar7 = 0;
    }
    else {
      iVar3 = fn_82549798(0x11c0,0x10,4,0);
      *piVar7 = iVar3;
    }
    lVar6 = lVar6 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar6 != 0);
  piVar7 = param_1 + 0x1f;
  lVar6 = 4;
  do {
    iVar3 = fn_82532AD0(0x47,piVar7[0x26a],piVar7[0x26e],piVar7[0x2a6]);
    lVar6 = lVar6 + -1;
    piVar7 = piVar7 + 1;
    *piVar7 = iVar3;
  } while (lVar6 != 0);
  param_1[0x24] = 0;
  return;
}

