extern void fn_82EEA748(void *, int);

int fn_82E3E788(char *param_1, unsigned param_2)
{
  if (*(int *)(param_1 + 0x68) != 0) {
    return 0x8000FFFF;
  }
  if (param_2 == 0) {
    return 0x80070057;
  }
  fn_82EEA748(param_1 + 4, 8);
  *(int *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 100) = 0;
  *(int *)(param_1 + 0x68) = 1;
  return 0;
}
