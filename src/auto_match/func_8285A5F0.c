extern void fn_8285A1B8(void *p);

void fn_8285A5F0(int param_1)
{
  void *p = *(void **)(param_1 + 64);
  if (p != 0) {
    fn_8285A1B8(p);
  }
}
