extern void fn_82A43A30(void *self, void *arg, unsigned int flags);

void fn_82A476D0(void *self, void *arg, unsigned int flags)
{
  if ((flags & 0x10000000) == 0) {
    return;
  }
  fn_82A43A30(self, arg, flags);
}
