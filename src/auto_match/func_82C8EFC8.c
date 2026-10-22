extern void fn_82C8EE60(int a, int b, int c, int n);
extern void fn_82C8EF18(int a, int b, int c, int n);

void fn_82C8EFC8(int param_1)
{
  if (*(int *)(param_1 + 0x3a10) == 0) {
    if (*(int *)(param_1 + 0x3a0c) == 1) {
      fn_82C8EE60(*(int *)(param_1 + 0xecc), *(int *)(param_1 + 0xed0),
                  *(int *)(param_1 + 0xed4),
                  *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xd0));
      *(int *)(param_1 + 0x3a10) = *(int *)(param_1 + 0x3a0c);
    }
  } else if (*(int *)(param_1 + 0x3a10) == 1) {
    if (*(int *)(param_1 + 0x3a0c) == 0) {
      fn_82C8EF18(*(int *)(param_1 + 0xecc), *(int *)(param_1 + 0xed0),
                  *(int *)(param_1 + 0xed4),
                  *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xd0));
      *(int *)(param_1 + 0x3a10) = *(int *)(param_1 + 0x3a0c);
    }
  }
}
