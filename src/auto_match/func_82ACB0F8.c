unsigned __int64 fn_82ACB0F8(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (((*(unsigned char *)(param_1 + 0x10) & 1) == 0) || ((*(unsigned char *)(param_2 + 0x10) & 1) == 0)) {
    while ((uVar1 = *(unsigned int *)((param_2 & 0xfffffffe) + 0x24), (uVar1 & 1) == 0 &&
           (param_2 = (uVar1 & 0xfffffffe) - 0x28, param_2 != 0))) {
      if (param_2 == param_1) {
        return 1;
      }
    }
    return 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x14) & 0x1fff;
  if (uVar1 <= (*(unsigned int *)(param_2 + 0x14) & 0x1fff)) {
    do {
      param_1 = *(unsigned int *)((param_1 & 0xfffffffe) + 0x28);
      if ((((param_1 & 1) != 0) || (param_1 == 0)) || ((*(unsigned int *)(param_1 + 0x14) & 0x1fff) < uVar1)
         ) {
        return 0;
      }
    } while (param_1 != param_2);
  }
  return 1;
}

