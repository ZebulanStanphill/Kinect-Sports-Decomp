extern void fn_82CEA950(int *param_1, int *param_2, int param_3);

void fn_82CEAB80(int *param_1, int *param_2, int param_3)
{
  int n;

  n = 8;
  if (8 < param_3 << 1) {
    do {
      n = n << 1;
    } while (n < param_3 << 1);
  }
  fn_82CEA950(param_1, param_2, n);
}
