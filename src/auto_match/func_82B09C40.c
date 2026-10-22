typedef unsigned int uint;

extern unsigned char fn_82AF6268(int a, int b);
extern int fn_82AFA478(int a, int b, uint n);
extern int fn_82B006B0(int a, int b, int c, int d);
extern int fn_82B09BE0(int a, int b, int c, uint *out, int d);

int fn_82B09C40(int param_1, int param_2, int param_3)
{
  uint n;

  if (((*(uint *)(param_2 + 8) ^ *(uint *)(param_3 + 8)) & 0x3f80) == 0 &&
      !fn_82AF6268(param_1, param_3) &&
      fn_82B09BE0(param_1, param_3, param_2, &n, 0) == 0) {
    if (n <= *(uint *)(param_1 + 0x298)) {
      return fn_82B006B0(param_1, param_3, param_2, 0);
    }
    fn_82AFA478(param_1, param_2, n);
  }
  return 0;
}
