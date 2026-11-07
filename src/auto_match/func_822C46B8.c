extern void fn_822C8C08(int a, const char *name);

void fn_822C46B8(int param_1, unsigned int param_2)
{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x25c) == 0) {
      fn_822C8C08(*(int *)(param_1 + 0x114), "msmd");
    }
  }
  else {
    fn_822C8C08(*(int *)(param_1 + 0x114), "idle");
  }
  *(int *)(param_1 + 0x25c) = 0;
}
