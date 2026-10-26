extern int fn_82A28E60(int, int, int);
extern int fn_82A2A360();

void fn_82EEB368(int param_1, int param_2)
{
  fn_82A28E60(fn_82A2A360(), 0, param_2);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - 1;
}
