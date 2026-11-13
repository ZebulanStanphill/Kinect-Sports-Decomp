int fn_82897BB0(int param_1)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    return param_1;
  }
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x24);
  } while (iVar2 != 0);
  return iVar1;
}

