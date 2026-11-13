extern int fn_825735B8();
extern int fn_825764F0();


void fn_823B3D90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      return;
    }
    iVar2 = fn_825735B8(*(unsigned int *)(param_1 + 0x84),param_1);
    while (iVar2 != 0) {
      *(unsigned int *)(*(int *)(iVar2 + 4) + 400) = 0;
      iVar2 = fn_825764F0(*(unsigned int *)(param_1 + 0x84),param_1,*(unsigned int *)(iVar2 + 4));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x1b0);
      }
    }
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x8c) != 0) {
      piVar1 = (int *)fn_825735B8(*(unsigned int *)(param_1 + 0x84),param_1);
      while (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 8))(piVar1,7,0);
        iVar2 = fn_825764F0(*(unsigned int *)(param_1 + 0x84),param_1,piVar1[1]);
        if (iVar2 == 0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = *(int **)(iVar2 + 0x1b0);
        }
      }
      return;
    }
    piVar1 = (int *)fn_825735B8(*(unsigned int *)(param_1 + 0x84),param_1);
    while (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 8))(piVar1,5,0);
      iVar2 = fn_825764F0(*(unsigned int *)(param_1 + 0x84),param_1,piVar1[1]);
      if (iVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(iVar2 + 0x1b0);
      }
    }
    uVar3 = 1;
  }
  *(unsigned int *)(param_1 + 0x8c) = uVar3;
  return;
}

