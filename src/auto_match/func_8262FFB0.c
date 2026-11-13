unsigned int fn_8262FFB0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *param_1 & 0xf;
  if (uVar2 == 3) {
    uVar1 = param_1[0xc] >> 9 & 3;
    if (uVar1 == 3) {
      uVar2 = 0x12;
    }
    else if (uVar1 == 2) {
      uVar2 = 0x11;
    }
    else if (uVar1 == 0) {
      uVar2 = 0x14;
    }
    else if ((param_1[8] & 0x400) != 0) {
      uVar2 = 0x13;
    }
  }
  else if (((uVar2 == 4) && ((*param_1 & 0x40000000) != 0)) &&
          ((*(unsigned int *)(param_1[6] + 0x30) & 0x600) == 0x400)) {
    uVar2 = 0x10;
  }
  return uVar2;
}

