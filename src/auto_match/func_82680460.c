unsigned int fn_82680460(unsigned int param_1)

{
  unsigned int uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    return param_1;
  }
  if ((param_1 & 0xffffff) == 0) {
    param_1 = param_1 >> 0x18;
    uVar1 = 0x18;
  }
  else if ((param_1 & 0xffff) == 0) {
    param_1 = param_1 >> 0x10;
    uVar1 = 0x10;
  }
  else if ((param_1 & 0xff) == 0) {
    param_1 = param_1 >> 8;
    uVar1 = 8;
  }
  for (; (param_1 & 1) == 0; param_1 = param_1 >> 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1 & 0xff;
}

