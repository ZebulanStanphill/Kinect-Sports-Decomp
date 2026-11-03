extern int fn_82E4F2B8(int);
extern int fn_82EDE890(int);
extern int fn_82EDFDE0(unsigned int, unsigned int, int, int, int);

int fn_82E99CD0(int param_1, unsigned int param_2, unsigned int param_3, int param_4, int param_5)
{
  int r;

  if (param_2 == 0 || param_3 == 0 || ((param_4 < 0 || param_4 > 3) && param_4 != -1)) {
    r = 1;
  }
  else {
    *(int *)(param_1 + 0x395c) = param_5;
    if (param_4 != -1) {
      *(int *)(param_1 + 0x393c) = param_4;
      r = fn_82EDE890(param_1);
      if (r != 0) {
        return r;
      }
    }
    r = fn_82E4F2B8(param_1);
    if (r == 0) {
      r = fn_82EDFDE0(param_2, param_3, param_1, 0, 0);
    }
  }
  return r;
}
