extern int fn_8265CA20();


void fn_824D47E0(unsigned int *param_1)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  
  while (param_1[4] != 0) {
    if ((unsigned __int64)(unsigned int)param_1[4] != 0) {
      lVar1 = (unsigned __int64)(unsigned int)param_1[4] - 1;
      param_1[4] = (int)lVar1;
      if (lVar1 == 0) {
        param_1[3] = 0;
      }
    }
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar3 = iVar2 << 2;
    do {
      iVar3 = iVar3 + -4;
      iVar2 = iVar2 + -1;
      if (*(int *)(iVar3 + param_1[1]) != 0) {
        fn_8265CA20(*(int *)(iVar3 + param_1[1]));
      }
    } while (iVar2 != 0);
  }
  if (param_1[1] != 0) {
    fn_8265CA20();
  }
  param_1[2] = 0;
  param_1[1] = 0;
  fn_8265CA20(*param_1);
  *param_1 = 0;
  return;
}

