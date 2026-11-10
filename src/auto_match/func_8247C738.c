extern void fn_82280558(unsigned int obj, int arg);

void fn_8247C738(int param_1, int param_2)
{
  unsigned int p = *(unsigned int *)(param_1 + 0x24);
  if (p == 0) {
    return;
  }
  p = *(unsigned int *)(p + 0x10);
  if (p == 0) {
    return;
  }
  fn_82280558(p, param_2);
}
