extern void *fn_82F93778(void *, void *);
extern void *fn_82F936E0(void *, void *, void *);
void *fn_82F932A0(void *object, void *where, void *value)
{
  int tmp;
  void *t = &tmp;
  fn_82F936E0(object, where, fn_82F93778(t, value));
  fn_82F93778((char *)object + 2, value);
  return object;
}
