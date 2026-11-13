unsigned int fn_82EDBD48(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = (unsigned int)param_3;
  uVar1 = (unsigned int)param_2;
  if (param_4 == 0) {
    if (((param_1 != 0) && (param_1 != 3)) && (param_1 != 0x41595556)) {
      if (((param_1 == 0x32595559) || (param_1 == 0x59565955)) ||
         ((param_1 == 0x50343232 || (param_1 == 0x56323136)))) {
        return uVar1 & 1;
      }
      if (((param_1 == 0x56555949) || (param_1 == 0x32315659)) || (param_1 == 0x30323449)) {
        if (((param_2 & 1) != 0) || ((param_3 & 1) != 0)) {
          return 1;
        }
      }
      else if (param_1 == 0x39555659) {
        if (param_2 !=
            ((__int64)((int)uVar1 >> 2) + (unsigned __int64)((int)uVar1 < 0 && (param_2 & 3) != 0) &
            0x3fffffff) << 2) {
          return 1;
        }
        if (param_3 !=
            ((__int64)((int)uVar2 >> 2) + (unsigned __int64)((int)uVar2 < 0 && (param_3 & 3) != 0) &
            0x3fffffff) << 2) {
          return 1;
        }
      }
    }
  }
  else {
    if (((param_1 == 0) || (param_1 == 3)) || (param_1 == 0x41595556)) {
      return uVar2 & 1;
    }
    if (((param_1 == 0x32595559) || (param_1 == 0x59565955)) || (param_1 == 0x56323136)) {
      if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
    if (((param_1 == 0x56555949) || (param_1 == 0x30323449)) || (param_1 == 0x32315659)) {
      if (((param_2 & 1) == 0) && ((param_3 & 3) == 0)) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 0x39555659) {
      if (((param_2 & 3) == 0) && ((param_3 & 7) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

