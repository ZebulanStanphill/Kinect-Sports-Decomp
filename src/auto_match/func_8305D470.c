int fn_8305D470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x24);
    if ((iVar2 != 0) || (iVar2 = *(int *)(param_2 + 0x20), iVar2 != 0)) {
      return iVar2;
    }
    if (*(int *)(param_2 + 0x1c) != 0) {
      do {
        if (param_2 == *(int *)(param_1 + 4)) {
          return 0;
        }
        iVar2 = *(int *)(param_2 + 0x1c);
        iVar1 = *(int *)(iVar2 + 0x20);
        if ((iVar1 != 0) && (iVar1 != param_2)) {
          return iVar1;
        }
        param_2 = iVar2;
      } while (*(int *)(iVar2 + 0x1c) != 0);
    }
  }
  return 0;
}

