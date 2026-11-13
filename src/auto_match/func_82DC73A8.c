int fn_82DC73A8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (iVar1 <= 0x10) {
    return 0x10;
  }
  if (iVar1 <= 0x20) {
    return 0x20;
  }
  if (iVar1 <= 0x30) {
    return 0x30;
  }
  if (iVar1 <= 0x40) {
    return 0x40;
  }
  if (iVar1 <= 0x60) {
    return 0x60;
  }
  if (iVar1 <= 0x80) {
    return 0x80;
  }
  if (iVar1 <= 0xa0) {
    return 0xa0;
  }
  if (iVar1 <= 0xc0) {
    return 0xc0;
  }
  if (iVar1 <= 0x100) {
    return 0x100;
  }
  if (iVar1 <= 0x140) {
    return 0x140;
  }
  if (iVar1 <= 0x200) {
    return 0x200;
  }
  if (iVar1 <= 0x220) {
    return 0x220;
  }
  if (iVar1 <= 0x400) {
    return 0x400;
  }
  if (iVar1 <= 0x800) {
    return 0x800;
  }
  if (iVar1 <= 0x1000) {
    return 0x1000;
  }
  if (iVar1 > 0x2000) {
    return param_1;
  }
  return 0x2000;
}

