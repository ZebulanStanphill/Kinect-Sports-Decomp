extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82E15190(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = (int)param_2;
  if (iVar4 != 0) {
    fn_82CE4040(param_2);
  }
  piVar5 = (int *)(param_1 + 0x1c);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar2 = (int *)*piVar5;
    do {
      if (*piVar2 == iVar4) goto LAB_82e151ec;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  iVar3 = -1;
LAB_82e151ec:
  if (iVar4 != 0) {
    fn_82CE4118(param_2);
  }
  if (-1 < iVar3) {
    iVar4 = *piVar5;
    iVar1 = iVar3 * 4;
    if (*(int *)(iVar1 + iVar4) != 0) {
      fn_82CE4118();
    }
    *(unsigned int *)(iVar1 + iVar4) = 0;
    iVar4 = *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = iVar4;
    if (iVar4 != iVar3) {
      *(unsigned int *)(*piVar5 + iVar1) = *(unsigned int *)(iVar4 * 4 + *piVar5);
    }
  }
  return;
}

