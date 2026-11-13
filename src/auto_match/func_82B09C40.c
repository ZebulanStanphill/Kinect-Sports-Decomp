extern unsigned char fn_82AF6268(int a, int b);
extern int fn_82AFA478(int a, int b, unsigned int n);
extern int fn_82B006B0(int a, int b, int c, int d);
extern int fn_82B09BE0(int a, int b, int c, unsigned int *out, int d);

int fn_82B09C40(int param_1, int param_2, int param_3)
{
  unsigned int n;

  if (((*(unsigned int *)(param_2 + 8) ^ *(unsigned int *)(param_3 + 8)) & 0x3f80) == 0 &&
      !fn_82AF6268(param_1, param_3) &&
      fn_82B09BE0(param_1, param_3, param_2, &n, 0) == 0) {
    if (n <= *(unsigned int *)(param_1 + 0x298)) {
      return fn_82B006B0(param_1, param_3, param_2, 0);
    }
    fn_82AFA478(param_1, param_2, n);
  }
  return 0;
}
