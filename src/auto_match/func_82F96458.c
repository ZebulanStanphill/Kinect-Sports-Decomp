extern void *fn_82F93778(void *, void *);
extern void fn_82F927B0(void *, void *, void *);
extern void fn_82F964B0(void *);
void *fn_82F96458(void *object, void *where, void *value)
{
  int tmp;
  void *t = &tmp;
  fn_82F927B0(object, where, fn_82F93778(t, value));
  fn_82F964B0(object);
  return object;
}
