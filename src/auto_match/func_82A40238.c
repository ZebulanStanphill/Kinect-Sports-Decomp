void fn_82A40238(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 == 0x8007000e) {
    return;
  }
  if (uVar2 == 0x80004001) {
    return;
  }
  if (((int)uVar2 >> 0x10 & 0x1fffU) == 0x896) {
    return;
  }
  uVar1 = (unsigned __int64)uVar2 + 0x7787ff88;
  if (((uVar1 == 0) || ((uVar1 & 0xffffffff) == 0x1e)) || ((uVar1 & 0xffffffff) == 0xfff89)) {
    uVar2 = 0x88960004;
  }
  else {
    if ((uVar1 & 0xffffffff) != 0x1eff89) {
      return;
    }
    uVar2 = 0x88960003;
  }
  *param_1 = uVar2;
  return;
}

