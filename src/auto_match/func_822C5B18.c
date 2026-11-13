int fn_822C5B18(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    iVar2 = param_1;
    if (*(int *)(param_2 + 0x10) != param_2) {
      iVar2 = 0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x10))(*(unsigned int **)(param_2 + 0x10),iVar2);
    *(unsigned int *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}

