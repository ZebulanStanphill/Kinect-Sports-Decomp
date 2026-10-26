typedef struct { int pad[2]; int refs; } Rc;
typedef struct { int v[1]; } Sub;
typedef struct { Rc *rc; int pad; Sub c; } Inner;
typedef struct { int a; int pad; Inner b; } Outer;
extern void fn_82695DA0(Sub *d, const Sub *s);

static void Inner_copy(Inner *d, const Inner *s)
{
  d->rc = s->rc;
  d->rc->refs++;
  fn_82695DA0(&d->c, &s->c);
}

Outer *fn_826A9578(Outer *d, const Outer *s)
{
  d->a = s->a;
  Inner_copy(&d->b, &s->b);
  return d;
}
