void fn_82E84B30(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x888);
  if (3 < uVar1) goto LAB_82e84b94;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      *(unsigned int *)(param_1 + 0x628) = 0;
      goto LAB_82e84b94;
    }
    if (uVar1 == 0) {
      *(unsigned int *)(param_1 + 0x630) = 0;
      *(unsigned int *)(param_1 + 0x62c) = 0;
      *(unsigned int *)(param_1 + 0x644) = 0;
      *(unsigned int *)(param_1 + 0x978) = 0;
      *(unsigned int *)(param_1 + 0x97c) = 0;
      *(unsigned int *)(param_1 + 0x64c) = 0;
      *(unsigned int *)(param_1 + 0x628) = 1;
      *(unsigned int *)(param_1 + 0xa04) = 0;
      *(unsigned int *)(param_1 + 0x314) = 1;
      goto LAB_82e84b94;
    }
  }
  *(unsigned int *)(param_1 + 0x628) = 1;
  *(unsigned int *)(param_1 + 0x630) = 0;
  *(unsigned int *)(param_1 + 0x62c) = 0;
LAB_82e84b94:
  if (*(int *)(param_1 + 0xb08) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x648) = 0;
  *(unsigned int *)(param_1 + 0x64c) = 0;
  *(unsigned int *)(param_1 + 0x630) = 0;
  *(unsigned int *)(param_1 + 0x62c) = 0;
  *(unsigned int *)(param_1 + 0x644) = 0;
  *(unsigned int *)(param_1 + 0x978) = 0;
  *(unsigned int *)(param_1 + 0x97c) = 0;
  *(unsigned int *)(param_1 + 0x628) = 1;
  *(unsigned int *)(param_1 + 0xa04) = 0;
  *(unsigned int *)(param_1 + 0x920) = 0;
  return;
}

