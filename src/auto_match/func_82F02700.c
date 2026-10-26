extern void fn_82F02410(void *a, int b, int c);

void fn_82F02700(char *param_1)
{
  int f = *(int *)(param_1 + 0x10) & 7;
  if (f == 0) return;
  fn_82F02410(param_1, 0, f);
}
