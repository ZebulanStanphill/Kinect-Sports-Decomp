extern void fn_82A28E60(int a, int b, int c);
extern int fn_82A2A360(void);

void fn_82EE9DD8(int param_1)
{
  int n;
  int next;
  while (*(unsigned int *)(param_1 + 0x82c) != 0) {
    n = *(int *)(param_1 + 0x82c);
    next = *(int *)(n + 8);
    fn_82A28E60(fn_82A2A360(), 0, n);
    *(int *)(param_1 + 0x82c) = next;
  }
}
