extern void fn_82F93768(void *self, char c);
extern void fn_8265D8A0(void *self, void *a, void *b);
extern void fn_8265DB18(void *self, void *a, void *b, void *c);

void *fn_826667A0(void *self, void *a, void *b, void *c, char *al)
{
  fn_82F93768(self, *al);
  fn_8265D8A0(self, 0, 0);
  fn_8265DB18(self, a, b, c);
  return self;
}
