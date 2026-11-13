unsigned __int64 fn_82AEFAD0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  if (((param_1 & 0x18) == 0) || ((param_2 & 0x18) == 0)) {
    if (((param_1 & 2) == 0) || ((param_2 & 1) == 0)) {
      if (((param_1 & 4) != 0) && ((param_2 & 1) != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

