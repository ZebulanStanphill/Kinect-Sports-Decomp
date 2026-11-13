extern char *fn_8265D5A8(char *p);
extern void fn_82F93768(void *self, char c);
extern void fn_8265D8A0(void *self, void *a, void *b);
extern void fn_8265D860(void *self, void *x);

void *fn_8265D7D0(void *self, void *x)
{
  char tmp;
  fn_82F93768(self, *fn_8265D5A8(&tmp));
  fn_8265D8A0(self, 0, 0);
  fn_8265D860(self, x);
  return self;
}
