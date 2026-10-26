extern void fn_82AB4F50(void *p, int n, int v);

void fn_82AB85A8(char *p, int v)
{
  int n = ++*(int *)(p + 0x4c);
  fn_82AB4F50(*(void **)(p + 0x48), n, v);
}
