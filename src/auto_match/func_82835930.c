void fn_82835930(int param_1,int param_2)

{
  unsigned int *piVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  while (piVar1 = (int *)(iVar2 + 0xc), *piVar1 != 0) {
    iVar2 = *piVar1;
  }
  *piVar1 = param_2;
  return;
}

