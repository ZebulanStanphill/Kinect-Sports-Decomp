void fn_82FE7530(short *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  do {
    if (*param_1 == 0x2e) {
      *param_1 = 0;
      return;
    }
    param_1 = param_1 + 1;
  } while (*param_1 != 0);
  return;
}

