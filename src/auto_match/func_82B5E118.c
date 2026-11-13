extern unsigned int fn_82B54948(int a, int b, unsigned int c, int d);

void fn_82B5E118(int param_1, int param_2, unsigned int *param_3)
{
  if ((*param_3 & 0x400) != 0 && param_3[2] != 0 && *(unsigned int *)(param_3[2] + 0x14) != 0) {
    param_3[3] = fn_82B54948(param_1, param_2, *(unsigned int *)(param_3[2] + 0x14), 5);
  }
}
