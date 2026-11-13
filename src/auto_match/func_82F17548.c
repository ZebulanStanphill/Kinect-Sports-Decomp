extern int fn_82EDE890(int);
extern int fn_82F45228(int);
extern int fn_82EDFDE0(unsigned int, unsigned int, int, int, int);

int fn_82F17548(int param_1, unsigned int param_2, unsigned int param_3, int param_4, int param_5, int param_6)
{
  int r;

  if (param_2 == 0 || param_3 == 0 || ((param_4 < 0 || param_4 > 3) && param_4 != -1)) {
    r = 1;
  }
  else {
    if (param_4 != -1) {
      *(int *)(param_1 + 0x393c) = param_4;
      r = fn_82EDE890(param_1);
      if (r != 0) {
        return r;
      }
      r = fn_82F45228(param_1);
      if (r != 0) {
        return r;
      }
    }
    r = fn_82EDFDE0(param_2, param_3, param_1, param_5, param_6);
  }
  return r;
}
