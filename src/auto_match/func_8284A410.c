extern void fn_82BA02A8(void **, void *);
void **fn_8284A410(void **self, void *first, void *second)
{
  *self = first;
  fn_82BA02A8(self, second);
  return self;
}
