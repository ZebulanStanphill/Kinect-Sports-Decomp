extern unsigned int fn_82A1E650(unsigned int h, unsigned int timeout);
extern unsigned int fn_82A1F470(void);

unsigned int fn_82A1E740(unsigned int *param_1, unsigned int *param_2, int param_3)
{
  unsigned int r;

  if (*param_1 == 0x3e5) {
    if (param_3 == 0 || param_1[3] == 0) {
      r = 0x102;
    } else {
      r = fn_82A1E650(param_1[3], 0xffffffff);
    }
    if (r == 0x102) {
      return 0x3e4;
    }
    if (r != 0) {
      return fn_82A1F470();
    }
  }
  if (param_2 != 0) {
    *param_2 = param_1[1];
  }
  return *param_1;
}
