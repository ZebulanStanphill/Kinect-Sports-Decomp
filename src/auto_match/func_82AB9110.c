extern void fn_82AB4F50(void *p, int n, int v);

void fn_82AB9110(char *p, int v)
{
  int n = ++*(int *)(p + 0x28);
  fn_82AB4F50(*(void **)(p + 0x24), n, v);
}
