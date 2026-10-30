extern int fn_829D4A28();
extern int fn_829DCFB0();

void fn_829DD268(int param_1, __int64 param_2, __int64 param_3)
{
  unsigned int avail;
  unsigned int n;
  unsigned int i;
  int aiStack_60;

  avail = 700 - *(int *)(param_1 + 0x24b1c8);
  n = *(unsigned int *)(param_1 + 0xf4a10) < avail ? *(unsigned int *)(param_1 + 0xf4a10) : avail;
  for (i = 0; i < n; i++) {
    fn_829D4A28(param_1 + 0xf4a18,
                ((*(int *)(param_1 + 0xf4a14) + i) % 500) * 0x7d4 + param_1);
  }
  aiStack_60 = param_1 + 0xf4a18;
  fn_829DCFB0(*(int *)(param_1 + 0x24b1c8), param_2, &aiStack_60, param_3);
}
