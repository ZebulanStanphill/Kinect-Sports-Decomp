unsigned char fn_826BCFF8(unsigned __int64 param_1)

{
  if ((param_1 & 0xffffffff) < 0x80) {
    return 1;
  }
  if ((param_1 & 0xffffffff) < 0x800) {
    return 2;
  }
  if ((param_1 & 0xffffffff) < 0x10000) {
    return 3;
  }
  if ((param_1 & 0xffffffff) < 0x200000) {
    return 4;
  }
  if ((param_1 & 0xffffffff) < 0x4000000) {
    return 5;
  }
  return -(param_1 < 0x80000000) & 6;
}

