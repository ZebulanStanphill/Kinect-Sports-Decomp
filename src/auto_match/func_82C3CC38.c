unsigned __int64 fn_82C3CC38(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if ((((*param_2 != 0) && (*param_2 < 0x5dc01)) && (uVar1 = param_2[1], uVar1 != 0)) &&
     (uVar1 < 0x21)) {
    uVar3 = (unsigned __int64)param_2[2];
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        if ((uVar3 & 1) != 0) {
          uVar2 = uVar2 + 1;
        }
        uVar3 = uVar3 >> 1;
      } while (uVar3 != 0);
      if (uVar1 != uVar2) {
        return 0;
      }
    }
    uVar1 = param_2[3];
    if (((uVar1 != 0) && (param_2[4] != 0)) && (uVar2 = param_2[4] << 3, uVar1 <= uVar2)) {
      if (param_2[5] == 0) {
        if (uVar1 < 0x21) {
          return 1;
        }
      }
      else if (((param_2[5] == 1) && (uVar2 == uVar1)) && (uVar1 < 0x41)) {
        if ((uVar1 & 0x1f) == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

