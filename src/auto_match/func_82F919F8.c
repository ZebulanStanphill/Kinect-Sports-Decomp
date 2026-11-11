extern void *fn_82F93778(void *, void *);
extern void fn_82F927B0(void *, void *, void *);
extern void fn_82F92340(void *);
void *fn_82F919F8(void *object, void *where, void *value)
{
  int tmp;
  void *t = &tmp;
  fn_82F927B0(object, where, fn_82F93778(t, value));
  fn_82F92340(object);
  return object;
}
