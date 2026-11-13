extern int fn_82547C80();


void fn_8235DA80(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  char cVar5;
  
  if (*(int *)(param_1 + 0xc14) == 0) {
    return;
  }
  if (*(int **)(param_1 + 0x2ba8) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x2ba8) + 4))();
  }
  uVar1 = *(unsigned int *)(param_1 + 0x2bb0);
  if (uVar1 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x194) + 0x200);
    if (iVar2 == 5) {
      cVar5 = '\0';
    }
    else if (((iVar2 == 2) || (iVar2 == 3)) || (cVar5 = '\x01', iVar2 == 1)) {
      cVar5 = *(char *)(*(int *)(param_1 + 0x194) + 0x1fc);
    }
    if (cVar5 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x2b40) != 0) {
      return;
    }
    piVar3 = *(int **)(param_1 + 0x2ba8);
    if (piVar3 == (int *)0x0) {
      return;
    }
    (**(int (***)())(*piVar3 + 8))(piVar3,*(unsigned int *)(param_1 + 0x2bac));
    uVar4 = 1;
  }
  else if (uVar1 == 1) {
    if ((*(int *)(param_1 + 0x2ba8) != 0) && (*(int *)(*(int *)(param_1 + 0x2ba8) + 0x18) != 0)) {
      return;
    }
    uVar4 = 2;
  }
  else {
    if (2 < uVar1) {
      return;
    }
    if (*(int *)(param_1 + 0x2ba8) != 0) {
      fn_82547C80((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x2ba8) + 0xc) + 0xd0,0,0);
    }
    uVar4 = 3;
  }
  *(unsigned int *)(param_1 + 0x2bb0) = uVar4;
  return;
}

