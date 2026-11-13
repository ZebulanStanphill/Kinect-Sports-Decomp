unsigned int fn_828358F8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 8);
    if (((uVar1 & 0x20) != 0) || ((uVar1 & 0x10) != 0)) {
      return *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x14);
    }
  }
  return 0;
}

