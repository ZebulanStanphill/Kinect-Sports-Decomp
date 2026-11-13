int fn_830604F8(int param_1,int param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if (param_2 <= 0) {
    return iVar1;
  }
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar2 < param_2);
  return iVar1;
}

