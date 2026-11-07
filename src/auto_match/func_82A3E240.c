extern int fn_82A3DC08(int param_1, int param_2, int param_3);
extern int fn_82A3DEC8(int param_1, int param_2, int param_3);

int fn_82A3E240(int param_1, int param_2, int param_3)
{
  int n;

  if (param_2 < 0x101) {
    n = 0x101 - param_2;
    if (n >= param_3) {
      n = param_3;
    }
    n = fn_82A3DC08(param_1, param_2, n);
    *(int *)(param_1 + 0x2eb8) = n;
    param_3 = (param_2 - n) + param_3;
    param_2 = n;
    if (param_3 <= 0) {
      return param_3;
    }
  }
  return fn_82A3DEC8(param_1, param_2, param_3);
}
