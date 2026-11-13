unsigned __int64 fn_82BC2EF0(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(char *)(*(int *)(param_2 + 0xab0) + 0x860) == '\0') {
    if (iVar1 == 7) {
      return 7;
    }
    if (iVar1 == 8) {
      return 8;
    }
  }
  else if (iVar1 < 0x15) {
    if ((0x12 < iVar1) || (iVar1 == 4)) {
      return 4;
    }
    if (4 < iVar1) {
      if (iVar1 < 8) {
        return param_1;
      }
      if (iVar1 == 8) {
        return 8;
      }
      if (iVar1 == 9) {
        return param_1;
      }
    }
  }
  else if (iVar1 < 0x22) {
    if (0x1f < iVar1) {
      return 4;
    }
    if (0x14 < iVar1) {
      if (iVar1 < 0x17) {
        return 8;
      }
      if (iVar1 < 0x19) {
        return 4;
      }
    }
  }
  else if ((0x2a < iVar1) && (iVar1 < 0x2d)) {
    return param_1;
  }
  return 0x30;
}

