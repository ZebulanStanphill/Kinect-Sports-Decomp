void fn_8269AD70(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(unsigned int *)(param_1 + 0x8c) >> 0x13 & 1) != 0) {
    return;
  }
  if ((*(unsigned int *)(param_2 + 0xb00) >> 0x13 & 1) != 0) {
    return;
  }
  if ((*(unsigned char *)(param_1 + 0x66) & 0x10) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) < -1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 != 0) {
    do {
      if ((*(unsigned int *)(iVar1 + 0x8c) >> 0x13 & 1) != 0) break;
      iVar1 = *(int *)(iVar1 + 0x74);
    } while (iVar1 != 0);
    if (iVar1 != 0) {
      *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(iVar1 + 0x78);
      *(int *)(iVar1 + 0x78) = param_1;
      goto LAB_8269ade8;
    }
  }
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_2 + 0xaf8);
  *(int *)(param_2 + 0xaf8) = param_1;
LAB_8269ade8:
  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x8c) | 0x80000;
  *(unsigned int *)(param_2 + 0xb00) = *(unsigned int *)(param_2 + 0xb00) | 0x400;
  return;
}

