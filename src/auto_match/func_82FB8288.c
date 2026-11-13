extern int fn_83013B98();


void fn_82FB8288(int param_1,int param_2,int *param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  
  for (piVar2 = *(int **)(param_1 + 0x1c);
      (piVar2 != *(int **)(param_1 + 0x20) && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
  }
  uVar1 = (unsigned __int64)(*(int **)(param_1 + 0x20) != piVar2);
  if ((((-(unsigned int)(uVar1 != 0) & (unsigned int)(piVar2 + 1)) == 0) &&
      (piVar2 = (int *)(**(int (***)())(*param_3 + 0xc))
                                 (param_3,*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2 &
                                          0xffff,param_3,-uVar1), piVar2 != (int *)0x0)) &&
     (iVar3 = fn_83013B98(param_1 + 0x1c,param_2,piVar2), iVar3 == 0)) {
    (**(int (***)())(*piVar2 + 4))(piVar2);
  }
  return;
}

