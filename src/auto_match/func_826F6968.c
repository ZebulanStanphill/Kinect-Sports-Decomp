int fn_826F6968(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  if (*(unsigned int *)(param_1 + 0x7d4) == 100) {
    iVar1 = *(int *)(param_1 + 2000) + 1;
    *(unsigned int *)(param_1 + 0x7d4) = 99;
    *(int *)(param_1 + 2000) = iVar1;
    if (iVar1 == 100) {
      *(unsigned int *)(param_1 + 2000) = 0;
    }
  }
  uVar2 = *(int *)(param_1 + 2000) + *(int *)(param_1 + 0x7d4);
  if (uVar2 >= 100) {
    uVar2 = uVar2 - 100;
  }
  *(int *)(param_1 + 0x7d4) = *(int *)(param_1 + 0x7d4) + 1;
  return uVar2 * 0x14 + param_1;
}

