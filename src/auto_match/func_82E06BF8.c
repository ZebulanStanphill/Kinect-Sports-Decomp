__int64 fn_82E06BF8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned int)*(unsigned short *)(param_2 + 1);
  if (6 < uVar1 - 1) {
    return 0;
  }
  if (uVar1 == 2) {
    return (unsigned __int64)*param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  }
  if (uVar1 == 3) {
    return (unsigned __int64)*param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  }
  if ((uVar1 != 4) && (uVar1 != 5)) {
    if ((uVar1 != 6) && (uVar1 == 1)) {
      return (unsigned __int64)*param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
    }
    return (unsigned __int64)*param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 8);
  }
  return (unsigned __int64)*param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
}

