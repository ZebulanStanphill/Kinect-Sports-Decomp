typedef struct Pair { int a; int b; } Pair;
typedef struct Vec { Pair *first; Pair *last; } Vec;

static Pair *copy(Pair *s, Pair *e, Pair *d)
{
  for (; s != e; s++, d++) {
    d->a = s->a;
    d->b = s->b;
  }
  return d;
}

static void destroy(Pair *p, Pair *e)
{
  for (; p != e; p++)
    ;
}

void fn_82671700(Pair **ret, Vec *v, Pair *first, Pair *last)
{
  *ret = first;
  if (first != last) {
    Pair *p = copy(last, v->last, first);
    destroy(p, v->last);
    v->last = p;
  }
}
