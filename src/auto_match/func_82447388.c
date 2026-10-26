typedef int (*code)();

void fn_82447388(int param_1, int param_2, unsigned char *param_3)
{
  unsigned int t;

  (*(code *)(*(int *)(param_1 + 8) + 0x14))(param_1 + 8, param_2, &t);
  if (param_3 != 0) {
    *param_3 = (unsigned char)t;
  }
}
