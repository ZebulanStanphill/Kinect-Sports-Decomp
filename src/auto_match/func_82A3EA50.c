extern int fn_82A3E2B0(int p1, int p2, int n);
extern int fn_82A3E628(int p1, int p2, int n);

int fn_82A3EA50(int param_1, int param_2, int param_3)
{
  int n;
  int r;

  if (param_2 < 0x101) {
    n = 0x101 - param_2;
    if (n >= param_3) {
      n = param_3;
    }
    r = fn_82A3E2B0(param_1, param_2, n);
    *(int *)(param_1 + 0x2eb8) = r;
    param_3 = (param_2 - r) + param_3;
    param_2 = r;
    if (param_3 <= 0) {
      return param_3;
    }
  }
  return fn_82A3E628(param_1, param_2, param_3);
}
