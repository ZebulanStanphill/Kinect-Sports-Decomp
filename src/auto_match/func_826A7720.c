unsigned char fn_826A7720(int param_1)

{
  unsigned short uVar1;
  unsigned char bVar2;
  
  uVar1 = *(unsigned short *)(param_1 + 8);
  if (uVar1 < 0x25) {
    if (uVar1 == 0x24) {
      return 3;
    }
    if (uVar1 == 8) {
      return 8;
    }
    if (uVar1 == 9) {
      return 0x12;
    }
    if (uVar1 == 0xd) {
      return 0xd;
    }
    if (uVar1 == 0x1b) {
      return 0x13;
    }
    if (uVar1 == 0x21) {
      return 0x10;
    }
    if (uVar1 == 0x22) {
      return 0x11;
    }
    if (uVar1 == 0x23) {
      return 4;
    }
  }
  else {
    if (uVar1 == 0x25) {
      return 1;
    }
    if (uVar1 == 0x26) {
      return 0xe;
    }
    if (uVar1 == 0x27) {
      return 2;
    }
    if (uVar1 == 0x28) {
      return 0xf;
    }
    if (uVar1 == 0x2d) {
      return 5;
    }
    if (uVar1 == 0x2e) {
      return 6;
    }
  }
  bVar2 = 0;
  if (0x1f < *(unsigned char *)(param_1 + 10)) {
    bVar2 = *(unsigned char *)(param_1 + 10);
  }
  return bVar2;
}

