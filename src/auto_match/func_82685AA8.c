extern void fn_82685858(void *p);

void fn_82685AA8(int param_1)
{
  void *p = *(void **)(param_1 + 20);
  if (p != 0) {
    fn_82685858(p);
  }
}
