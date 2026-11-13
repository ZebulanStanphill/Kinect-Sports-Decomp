extern int fn_82359698();


void fn_823A1868(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1[0x16] == piVar1[0x15]) || (piVar1[0x16] == 0)) {
    if ((*(int *)(param_1 + 0x10) == 0) &&
       (iVar2 = (**(int (***)())(*piVar1 + 0x98))(piVar1,1), iVar2 != 0)) {
      *(unsigned int *)(param_1 + 0x10) = 1;
      (**(int (***)())(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),0);
    }
    else if ((*(int *)(param_1 + 0xc) != 0) &&
            (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0x18) + 0xc) == 0)) {
      fn_82359698(*(int *)(param_1 + 8),3);
    }
  }
  return;
}

