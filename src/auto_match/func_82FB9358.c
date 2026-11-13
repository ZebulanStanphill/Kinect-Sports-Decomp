extern int _blkmov();


void fn_82FB9358(unsigned *param_1, unsigned param_2)
{
  unsigned int uVar1;
  unsigned int e;
  uVar1 = param_2 * 2 + param_1[0];
  e = param_1[1] - 2;
  if (uVar1 < e) {
    _blkmov(uVar1, uVar1 + 2, ((((e - uVar1) - 1) >> 1) + 1) * 2);
  }
  param_1[1] = param_1[1] - 2;
}
