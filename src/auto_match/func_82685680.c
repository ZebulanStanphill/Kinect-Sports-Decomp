extern void fn_82685580(void *p);

void fn_82685680(int param_1)
{
  void *p = *(void **)(param_1 + 20);
  if (p != 0) {
    fn_82685580(p);
  }
}
