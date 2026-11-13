int fn_8301A7B8(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)((param_2 % 0xc1 + 10) * 4 + param_1);
  if (piVar2 != (int *)0x0) {
    while (piVar2[1] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
    }
    if (piVar2 + 2 != (int *)0x0) {
      iVar1 = piVar2[2];
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
      return iVar1;
    }
  }
  return 0;
}

