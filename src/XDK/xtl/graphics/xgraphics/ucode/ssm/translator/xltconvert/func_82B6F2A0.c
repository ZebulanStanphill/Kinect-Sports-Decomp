unsigned int fn_82B6F2A0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 4 & 3;
  uVar3 = uVar1 & 3;
  if (uVar2 == 0) {
    uVar3 = uVar3 | 0xc;
  }
  else if (uVar2 != 1) {
    if (uVar2 < 3) {
      uVar3 = uVar3 | 4;
    }
    else if (uVar2 == 3) {
      uVar3 = uVar3 | 8;
    }
  }
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
    uVar3 = uVar3 | 0x20;
  }
  else if (uVar2 == 1) {
    uVar3 = uVar3 | 0x30;
  }
  else if (uVar2 == 3) {
    uVar3 = uVar3 | 0x10;
  }
  uVar1 = uVar1 >> 0xc & 3;
  if (uVar1 == 0) {
    return uVar3 | 0x40;
  }
  if (uVar1 == 1) {
    return uVar3 | 0x80;
  }
  if (2 < uVar1) {
    return uVar3;
  }
  return uVar3 | 0xc0;
}

