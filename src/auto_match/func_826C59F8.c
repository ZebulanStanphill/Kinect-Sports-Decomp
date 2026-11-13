unsigned __int64 fn_826C59F8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x74);
  }
  else {
    iVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if ((iVar1 == 2) &&
       (uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x68, (unsigned __int64)*(unsigned int *)(param_1 + 8) == 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

