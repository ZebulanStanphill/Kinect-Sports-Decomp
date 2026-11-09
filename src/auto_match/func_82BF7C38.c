extern void fn_82BE8D28(void *p);
extern void *fn_82BF7940(void *self, int a, const char *b, const char *c);
extern unsigned int lbl_820EBCA4;

void **fn_82BF7C38(void **self, int a, const char *b, const char *c, void *d)
{
  fn_82BF7940(self, a, b, c);
  self[5] = d;
  self[4] = 0;
  self[0] = &lbl_820EBCA4;
  if (d != 0) {
    fn_82BE8D28(d);
  }
  return self;
}
