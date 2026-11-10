extern void *fn_82F93778(void *, void *);
extern void fn_82660468(void *, void *, void *);
void *fn_8265FED0(void *object, void *where, void *value)
{
  int tmp;
  void *t = &tmp;
  fn_82660468(object, where, fn_82F93778(t, value));
  return object;
}
