unsigned int fn_829F53F8(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x78);
  do {
    if (*piVar1 == param_2) {
      return *(unsigned int *)(iVar2 * 0x4b50 + *(int *)(param_1 + 0x9c) + 0x4c);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 6);
  return 1;
}

