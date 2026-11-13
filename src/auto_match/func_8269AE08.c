void fn_8269AE08(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(unsigned int *)(param_1 + 0x8c) >> 0x13 & 1) == 0) {
    return;
  }
  if ((*(unsigned int *)(param_2 + 0xb00) >> 0x13 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 != 0) {
      do {
        if ((*(unsigned int *)(iVar1 + 0x8c) >> 0x13 & 1) != 0) break;
        iVar1 = *(int *)(iVar1 + 0x74);
      } while (iVar1 != 0);
      if (iVar1 != 0) {
        *(unsigned int *)(iVar1 + 0x78) = *(unsigned int *)(param_1 + 0x78);
        goto LAB_8269ae60;
      }
    }
    *(unsigned int *)(param_2 + 0xaf8) = *(unsigned int *)(param_1 + 0x78);
  }
LAB_8269ae60:
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x8c) & 0xfff7ffff;
  *(unsigned int *)(param_2 + 0xb00) = *(unsigned int *)(param_2 + 0xb00) | 0x400;
  return;
}

