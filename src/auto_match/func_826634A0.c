extern char *fn_8265D5A8(char *p);
extern void fn_82F93768(void *self, char c);
extern void fn_82663538(void *self, void *a, void *b);
extern void fn_826634F8(void *self, void *x);

void *fn_826634A0(void *self, void *x)
{
  char tmp;
  fn_82F93768(self, *fn_8265D5A8(&tmp));
  fn_82663538(self, 0, 0);
  fn_826634F8(self, x);
  return self;
}
