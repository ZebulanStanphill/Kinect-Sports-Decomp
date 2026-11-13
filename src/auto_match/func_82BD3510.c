unsigned __int64 fn_82BD3510(unsigned int *param_1,unsigned int param_2)

{
  if ((*param_1 & 0x400000) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 1) {
      return 1;
    }
    if (param_2 < 3) {
      return 2;
    }
    if (param_2 == 3) {
      return 3;
    }
  }
  else {
    if (param_2 == 0) {
      return (unsigned __int64)param_1[1] & 7;
    }
    if (param_2 == 1) {
      return (unsigned __int64)(param_1[1] >> 4) & 7;
    }
    if (param_2 < 3) {
      return (unsigned __int64)(param_1[1] >> 8) & 7;
    }
    if (param_2 == 3) {
      return (unsigned __int64)(param_1[1] >> 0xc) & 7;
    }
  }
  return 0xffffffffffffffff;
}

