unsigned __int64 fn_82A75390(unsigned int param_1)

{
  param_1 = param_1 & 0xffff;
  if (7 < param_1 - 0x160) {
    return 0;
  }
  if (param_1 == 0x161) {
    return 2;
  }
  if (((param_1 != 0x162) && (param_1 != 0x163)) && (param_1 != 0x164)) {
    if (param_1 == 0x165) {
      return 2;
    }
    if ((param_1 != 0x166) && (param_1 == 0x160)) {
      return 1;
    }
  }
  return 3;
}

