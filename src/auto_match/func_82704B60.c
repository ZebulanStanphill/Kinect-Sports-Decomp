typedef struct { int pad[2]; int refs; } Rc;
typedef struct { int v[1]; } Sub;
typedef struct { Rc *rc; Sub c; } Inner;
typedef struct { int a; Inner b; } Outer;
extern void fn_82702DE0(Sub *d, const Sub *s);

static void Inner_copy(Inner *d, const Inner *s)
{
  d->rc = s->rc;
  d->rc->refs++;
  fn_82702DE0(&d->c, &s->c);
}

Outer *fn_82704B60(Outer *d, const Outer *s)
{
  d->a = s->a;
  Inner_copy(&d->b, &s->b);
  return d;
}
