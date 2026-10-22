typedef struct Vec { void *first; void *last; void *end; } Vec;
typedef struct Self { void *vtbl; Vec v; } Self;
extern void fn_8265CA20(void *);
extern char lbl_82025010[];

static void Vec_tidy(Vec *v)
{
  if (v->first != 0)
    fn_8265CA20(v->first);
  v->first = 0;
  v->last = 0;
  v->end = 0;
}

Self *fn_828B6210(Self *self, unsigned int flags)
{
  self->vtbl = lbl_82025010;
  Vec_tidy(&self->v);
  if (flags & 1)
    fn_8265CA20(self);
  return self;
}
