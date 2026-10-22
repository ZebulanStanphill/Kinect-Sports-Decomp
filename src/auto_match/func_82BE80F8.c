extern int fn_82BE64E0();
extern int fn_82BE7AE0();
extern int fn_82BF2AC0();
extern int fn_82BF2DC0();

int fn_82BE80F8(char *param_1, char *param_2, int param_3)
{
  int n;
  int max;
  int r;

  n = param_3 - *(int *)(param_1 + 0x98);
  fn_82BE64E0(*(int *)(param_1 + 0x80), 0x200);
  if (n == 0) {
    *(int *)(param_1 + 0x9c) = 4;
  }
  else {
    max = *(int *)(param_1 + 0x2c);
    if (max != 0) {
      r = fn_82BF2AC0(param_1 + 0xa0, param_2 + *(int *)(param_1 + 0x98), max < n ? max : n);
      if (r == -1) {
        if (fn_82BF2DC0(param_1 + 0xa0) != 0) {
          *(int *)(param_1 + 0x98) = 0;
          fn_82BE7AE0(param_1);
        }
      }
      else {
        *(int *)(param_1 + 0x98) += r;
      }
    }
  }
  return 0;
}
