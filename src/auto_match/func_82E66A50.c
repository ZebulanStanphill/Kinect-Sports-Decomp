unsigned int fn_82E66A50(unsigned int *param_1,unsigned int param_2)

{
  if ((param_2 & 0xffff0000) != 0) {
    return *(unsigned int *)((int)param_1 + ((param_2 >> 0xe & 0x3fffc) - 4));
  }
  if (1 < param_2) {
    if (param_2 == 2) {
      return param_1[2];
    }
    if (param_2 < 5) {
      return *param_1;
    }
    if (param_2 == 7) {
      return param_1[0x80];
    }
  }
  return param_1[1];
}

