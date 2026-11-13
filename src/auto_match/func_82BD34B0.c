unsigned int fn_82BD34B0(unsigned int *param_1,unsigned int param_2)

{
  if ((*param_1 & 0x400000) != 0) {
    if (param_2 == 0) {
      return param_1[1] & 3;
    }
    if (param_2 == 1) {
      return param_1[1] >> 2 & 3;
    }
    if (param_2 < 3) {
      return param_1[1] >> 4 & 3;
    }
    if (param_2 == 3) {
      return param_1[1] >> 6 & 3;
    }
  }
  return 1;
}

