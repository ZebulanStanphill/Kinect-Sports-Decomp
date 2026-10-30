extern void fn_8269B930(void *self, void *p);
extern void fn_826A1440(void *dst, void *where, void *src);

void fn_826A1798(char *self, char *other)
{
  if (*(void **)(other + 0x84) != 0) {
    fn_8269B930(self, *(void **)(other + 0x84));
  }
  fn_826A1440(self + 0x88, self + 0x88, other + 0x88);
}
