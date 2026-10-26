typedef struct { int v[1]; } Sub;
typedef struct { int x; Sub c; } Inner;
typedef struct { int a; int b; Inner in; } Outer;
extern void fn_826D6238(Sub *d, const Sub *s);

static void Inner_copy(Inner *d, const Inner *s)
{
  d->x = s->x;
  fn_826D6238(&d->c, &s->c);
}

Outer *fn_82769F00(Outer *d, const Outer *s)
{
  d->a = s->a;
  d->b = s->b;
  Inner_copy(&d->in, &s->in);
  return d;
}
