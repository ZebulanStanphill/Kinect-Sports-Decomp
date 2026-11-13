extern int fn_82A40AD8();
extern int fn_82A40B38();
extern int fn_82A43380();
extern int fn_82A43C88();
extern int fn_82A43C88();
extern int fn_82A47D50();
extern int fn_82A4F4E0();


void fn_82A44218(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar5;
  int iVar6;
  int aiStack_30;

  if (*(int *)(param_1 + 0x1b8) == 0) {
    return;
  }
  iVar6 = param_1 + 0xe4;
  if (param_2 == 0) {
    iVar3 = fn_82A47D50();
    while (iVar4 = fn_82A40AD8(iVar6), iVar4 != 0) {
      if (iVar4 != 0) {
        fn_82A4F4E0();
      }
    }
  }
  else {
    aiStack_30 = param_2;
    lVar2 = fn_82A43380(iVar6,&aiStack_30,0xffffffff82a43368,0);
    if (lVar2 == 0) {
      return;
    }
    iVar3 = fn_82A40B38(iVar6);
  }
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(unsigned int *)(iVar3 + 4);
  if (uVar1 == 0) {
    fn_82A43C88(param_1);
  }
  else {
    if (uVar1 == 1) {
      uVar5 = 1;
    }
    else {
      if (2 < uVar1) goto LAB_82a442dc;
      uVar5 = 2;
    }
    fn_82A43C88(param_1,uVar5);
  }
LAB_82a442dc:
  fn_82A4F4E0(iVar3);
  return;
}
