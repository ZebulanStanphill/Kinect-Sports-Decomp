void fn_8257E0B8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __int64 lVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0x24;
  piVar5 = (int *)(iVar1 + 4);
  do {
    for (iVar2 = *piVar5; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      piVar3 = (int *)(iVar2 + -0x10);
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(int (***)())(*piVar3 + 0x18))(piVar3,param_2);
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 2;
  } while (lVar4 != 0);
  for (iVar2 = *(int *)(iVar1 + 300); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    piVar5 = (int *)(iVar2 + -0x10);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    (**(int (***)())(*piVar5 + 0x18))(piVar5,param_2);
  }
  for (iVar1 = *(int *)(iVar1 + 0x124); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    piVar5 = (int *)(iVar1 + -0x10);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    (**(int (***)())(*piVar5 + 0x18))(piVar5,param_2);
  }
  return;
}

