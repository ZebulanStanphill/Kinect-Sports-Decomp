extern int _blkmov();


void fn_83014F10(unsigned int *param_1,unsigned int param_2)
{
  unsigned int p, e;
  p = (param_2 * 3) * 4 + (unsigned int)*param_1;
  e = param_1[1] - 0xc;
  if (p < e) {
    _blkmov(p, p + 0xc, ((e - p - 1) / 0xc + 1) * 0xc);
  }
  param_1[1] = param_1[1] - 0xc;
}
