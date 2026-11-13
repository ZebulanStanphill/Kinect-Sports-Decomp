extern int fn_82398DA0();
extern int fn_8239A928();
extern int fn_823ADF20();
extern int fn_8265CA20();
extern int memmove();


void fn_82397BA8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_8239A928();
  fn_82398DA0(param_1,*(unsigned int *)(param_1 + 0x1e4));
  iVar1 = *(int *)(param_1 + 0x1e4);
  if (iVar1 != 0) {
    fn_823ADF20(iVar1);
    fn_8265CA20(iVar1);
  }
  *(unsigned int *)(param_1 + 0x1e4) = 0;
  piVar2 = *(int **)(param_1 + 0x1b8);
  for (piVar3 = *(int **)(param_1 + 0x1b4); piVar3 != piVar2; piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
    fn_82398DA0(param_1,iVar1);
    if (iVar1 != 0) {
      fn_823ADF20(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != *(int *)(param_1 + 0x1b8)) {
    memmove(iVar1,*(int *)(param_1 + 0x1b8),0);
    *(int *)(param_1 + 0x1b8) = iVar1;
  }
  piVar2 = *(int **)(param_1 + 0x1a8);
  for (piVar3 = *(int **)(param_1 + 0x1a4); piVar3 != piVar2; piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
    fn_82398DA0(param_1,iVar1);
    if (iVar1 != 0) {
      fn_823ADF20(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  if (iVar1 != *(int *)(param_1 + 0x1a8)) {
    memmove(iVar1,*(int *)(param_1 + 0x1a8),0);
    *(int *)(param_1 + 0x1a8) = iVar1;
  }
  piVar2 = *(int **)(param_1 + 0x1c8);
  for (piVar3 = *(int **)(param_1 + 0x1c4); piVar3 != piVar2; piVar3 = piVar3 + 1) {
    iVar1 = *piVar3;
    fn_82398DA0(param_1,iVar1);
    if (iVar1 != 0) {
      fn_823ADF20(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 != *(int *)(param_1 + 0x1c8)) {
    memmove(iVar1,*(int *)(param_1 + 0x1c8),0);
    *(int *)(param_1 + 0x1c8) = iVar1;
  }
  return;
}

