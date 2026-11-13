void fn_82454BE0(int param_1,int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  if (piVar3 != param_2) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0xc))(piVar1,piVar3 != piVar1);
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    piVar1 = (int *)param_2[4];
    if (piVar1 == (int *)0x0) {
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      if (piVar1 != param_2) {
        piVar3 = (int *)0x0;
      }
      uVar2 = (**(int (***)())*piVar1)(piVar1,piVar3);
      *(unsigned int *)(param_1 + 0x18) = uVar2;
    }
  }
  piVar3 = (int *)param_2[4];
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0xc))(piVar3,param_2 != piVar3);
    param_2[4] = 0;
  }
  return;
}

