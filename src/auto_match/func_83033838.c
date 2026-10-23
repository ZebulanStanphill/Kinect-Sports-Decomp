void fn_83032B08(void *p);
void fn_83032D88(void *p);

void **fn_83033838(void **self, void **other)
{
  void *p;
  void *old;

  p = *other;
  if (p != 0) {
    fn_83032B08(p);
  }
  old = *self;
  *self = p;
  if (old != 0) {
    fn_83032D88(old);
  }
  return self;
}
