extern int fn_8267BE38();


void fn_826CD9A0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = param_1 + 9;
  piVar3 = (int *)param_1[10];
  while (piVar3 != piVar4) {
    piVar1 = (int *)piVar3[1];
    *piVar3 = param_1[3];
    param_1[3] = (int)piVar3;
    piVar3 = piVar1;
  }
  *piVar4 = (int)piVar4;
  param_1[10] = (int)piVar4;
  fn_8267BE38(param_1[5]);
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0xaf0);
    fn_8267BE38();
  }
  return;
}

