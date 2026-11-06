unsigned int fn_82963E70(unsigned int *param_1, int param_2, unsigned int *param_3)
{
  unsigned int v = param_1[0];
  unsigned int n;
  unsigned int m;
  unsigned int hi = v & 0xfff00000;
  switch (hi) {
  case 0:
    n = 0;
    break;
  case 0x50000000:
  case 0x70800000:
    n = param_1[3];
    break;
  case 0x50200000:
    n = 1;
    break;
  default:
    if ((v & 0xf0000000) == 0x60000000) {
      n = 4;
    } else {
      n = v & 0xfffff;
    }
    break;
  }
  m = n * param_2;
  if (m + n > param_1[3]) {
    if (param_3 != 0) {
      *param_3 = 0;
    }
    return 0;
  }
  if (param_3 == 0) {
    return n;
  }
  *param_3 = m * 4 + param_1[4];
  return n;
}
