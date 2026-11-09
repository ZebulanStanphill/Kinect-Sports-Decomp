extern void fn_82B7BEB0(void *heap, void *p);

void fn_82BA71D8(int *param_1)
{
  void *p;

  p = (void *)param_1[5];
  if (p == 0) {
    return;
  }
  fn_82B7BEB0(*(void **)(*param_1 + 0x5a8), p);
}
