extern void fn_82F8FE48(void *, unsigned, void *, void *);
void **fn_82F8F580(void *a, void **b, unsigned n, void *d)
{
  fn_82F8FE48(b, n, d, a);
  return b + n;
}
