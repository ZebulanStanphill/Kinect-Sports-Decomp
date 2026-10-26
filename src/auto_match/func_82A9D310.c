extern void fn_8265C990(int p, int a);
extern void fn_82A9D058(int p);

int fn_82A9D310(int param_1)
{
  int n;

  n = --*(int *)(param_1 + 0x88);
  if (n == 0) {
    fn_82A9D058(param_1);
    fn_8265C990(param_1, 0x24870000);
    return 0;
  }
  return n;
}
