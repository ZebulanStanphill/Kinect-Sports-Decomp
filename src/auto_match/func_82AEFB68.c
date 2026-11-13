unsigned __int64 fn_82AEFB68(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 & 0x18) == 0) || ((param_2 & 0x18) == 0)) {
    if (((uVar1 & 2) == 0) || ((param_2 & 1) == 0)) {
      if (((uVar1 & 4) != 0) && ((param_2 & 1) != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

