typedef int (*code)();

unsigned int fn_82C066E0(int param_1, int *param_2)
{
  unsigned r;

  *param_2 = param_1 + 0x88;
  r = (*(code *)(*(int *)(param_1 + 0x88) + 0x34))(param_1 + 0x88);
  return r == 0 ? 0x8000000a : 0;
}
