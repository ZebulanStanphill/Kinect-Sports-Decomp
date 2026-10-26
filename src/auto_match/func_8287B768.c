typedef int (*code)();

int fn_8287B768(int param_1)
{
  if (*(int **)(param_1 + 0x68) != 0 &&
      (*(code *)(**(int **)(param_1 + 0x68) + 4))(*(int **)(param_1 + 0x68)) < 0) {
    return 0xa0250000;
  }
  return 0x20250000;
}
