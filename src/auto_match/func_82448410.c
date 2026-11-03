extern void fn_8244CF38(void *);
extern void fn_82529320(void *, int);
extern void *memmove(void *, const void *, unsigned);

typedef struct Vec_82448410 {
  void **first;
  void **last;
} Vec_82448410;

typedef struct Obj_82448410 {
  char pad[0x48];
  Vec_82448410 *v;
} Obj_82448410;

static unsigned size(Vec_82448410 *v)
{
  return v->last - v->first;
}

void fn_82448410(Obj_82448410 *self)
{
  unsigned i;
  Vec_82448410 *v;
  void **f;
  for (i = 0; i < size(self->v); i++)
    fn_82529320(self->v->first[i], 0);
  v = self->v;
  f = v->first;
  if (f != v->last) {
    void **l = v->last;
    unsigned n = (v->last - l) * 4;
    memmove(f, l, n);
    v->last = f + (n >> 2);
  }
  fn_8244CF38(self);
}
