extern int fn_82A4F4E0();


void fn_82A780C8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  while (param_1[9] != 0) {
    iVar3 = param_1[9];
    iVar1 = *(int *)(iVar3 + 4);
    *(int *)(iVar3 + 4) = *param_1;
    *param_1 = iVar3;
    param_1[9] = iVar1;
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (param_1[1] != 0) {
    do {
      piVar2 = (int *)param_1[1];
      iVar3 = *piVar2;
      if ((piVar2 != param_1 + 2) && (piVar2 != (int *)0x0)) {
        fn_82A4F4E0();
        param_1[1] = 0;
      }
      param_1[1] = iVar3;
    } while (iVar3 != 0);
  }
  return;
}

