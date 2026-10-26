typedef struct { int v[1]; } Sub;
typedef struct { int x; Sub c; } Inner;
typedef struct { int a; int b; Inner in; } Outer;
extern void fn_8268C2D0(Sub *d, const Sub *s);

static void Inner_copy(Inner *d, const Inner *s)
{
  d->x = s->x;
  fn_8268C2D0(&d->c, &s->c);
}

Outer *fn_826D8A30(Outer *d, const Outer *s)
{
  d->a = s->a;
  d->b = s->b;
  Inner_copy(&d->in, &s->in);
  return d;
}
