void fn_82D00D60(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = 0;
  if (param_4 < 1) {
    return;
  }
  puVar2 = (unsigned int *)(param_3 + -4);
  do {
    if (param_2 < 1) {
      return;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *(unsigned int *)(param_2 * 0x10 + *param_1);
    param_2 = *(int *)(param_2 * 0x10 + *param_1 + 4);
  } while (iVar1 < param_4);
  return;
}

