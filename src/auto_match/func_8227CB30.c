extern int fn_82359C18(self);
typedef struct Impl { int (**vt)(struct Impl *, void *); } Impl;
typedef struct { int pad[4]; Impl *impl; } Fn;
Fn *fn_8227CB30(Fn *self, Fn *other)
{
  Impl *p;
  if (self != other) {
    fn_82359C18(self);
    p = other->impl;
    if (p == 0) {
      self->impl = 0;
    } else {
      if (p == (Impl *)other)
        self->impl = (Impl *)(*other->impl->vt)(other->impl, self);
      else
        self->impl = (Impl *)(*other->impl->vt)(other->impl, 0);
    }
  }
  return self;
}
