extern int fn_82FF86F0(int param_1, int param_2, unsigned int param_3, unsigned int *param_4);

int fn_82FF8938(int param_1, int param_2, unsigned int param_3)
{
  unsigned int count = 0;
  int result;

  result = fn_82FF86F0(param_1, param_2, param_3, &count);
  if (result == 1 && param_3 != count) {
    result = 0x38;
  }
  return result;
}
