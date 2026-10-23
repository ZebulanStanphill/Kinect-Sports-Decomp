void fn_8267C4C8(void *p);
void fn_8267C4F0(void *p);

void **fn_8278BEE8(void **self, void **other)
{
  void *p;

  p = *other;
  if (p != 0) {
    fn_8267C4C8(p);
  }
  if (*self != 0) {
    fn_8267C4F0(*self);
  }
  *self = p;
  return self;
}
