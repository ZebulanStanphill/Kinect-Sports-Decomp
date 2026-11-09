extern void fn_82CE5088(void *dest, void *src, void *arg);

void fn_82D96628(char *self, void *first, void *second, void *arg)
{
  fn_82CE5088(self + 0x20, first, arg);
  fn_82CE5088(self + 0x30, second, arg);
}
