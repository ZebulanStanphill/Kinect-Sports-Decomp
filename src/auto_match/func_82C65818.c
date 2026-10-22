extern int fn_82C4DE10(int a, int *out);
extern int fn_82C4E290(int a, int b);

int fn_82C65818(int param_1)
{
  int n;

  if (*(int *)(param_1 + 0xe6c) == 0) {
    if (fn_82C4DE10(*(int *)(param_1 + 0x54), &n) == (1 << (n - 1)) - 1) {
      return fn_82C4E290(*(int *)(param_1 + 0x54), *(int *)(param_1 + 0xe20) + 0x10) == 1;
    }
  }
  return 0;
}
