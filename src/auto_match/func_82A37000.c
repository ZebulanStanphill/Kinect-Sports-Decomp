extern int fn_82A2A360(unsigned int a);
extern void fn_82A28568(int a, unsigned int b, int c);

void fn_82A37000(unsigned int param_1, int param_2)
{
  fn_82A28568(fn_82A2A360(param_1), (param_1 >> 3) & 8, param_2);
}
