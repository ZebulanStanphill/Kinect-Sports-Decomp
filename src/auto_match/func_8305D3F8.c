int fn_8305D3F8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x34);
    if ((iVar2 != 0) || (iVar2 = *(int *)(param_2 + 0x30), iVar2 != 0)) {
      return iVar2;
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      do {
        if (param_2 == *(int *)(param_1 + 4)) {
          return 0;
        }
        iVar2 = *(int *)(param_2 + 0x2c);
        iVar1 = *(int *)(iVar2 + 0x30);
        if ((iVar1 != 0) && (iVar1 != param_2)) {
          return iVar1;
        }
        param_2 = iVar2;
      } while (*(int *)(iVar2 + 0x2c) != 0);
    }
  }
  return 0;
}

