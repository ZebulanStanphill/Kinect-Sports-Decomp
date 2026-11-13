unsigned __int64 fn_82917F68(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  
  if (param_2 == 0) {
    if (*(unsigned int *)(param_1 + 0x18) <= param_3) {
      return 0;
    }
    uVar1 = (unsigned __int64)*(unsigned int *)(param_3 * 4 + *(int *)(param_1 + 0x14));
  }
  else {
    if (param_3 < *(unsigned short *)(*(int *)(~param_2 + 0x18) + 10)) {
      uVar1 = (unsigned __int64)*(unsigned int *)(*(int *)(~param_2 + 0x38) + param_3 * 4);
    }
    else {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return ~uVar1;
}

