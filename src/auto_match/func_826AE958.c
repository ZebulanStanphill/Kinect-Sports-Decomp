typedef struct Cnt_826AE958 { int a; int b; int rc; } Cnt_826AE958;
typedef struct P2_826AE958 { Cnt_826AE958 *p; } P2_826AE958;
typedef struct P1_826AE958 { Cnt_826AE958 *p; } P1_826AE958;
typedef struct Pair_826AE958 { int x; P2_826AE958 y; } Pair_826AE958;
typedef struct Dst_826AE958 { P1_826AE958 a; Pair_826AE958 b; } Dst_826AE958;
typedef struct Src_826AE958 { P1_826AE958 *a; Pair_826AE958 *b; } Src_826AE958;
void fn_826AE958(Dst_826AE958 *d, Src_826AE958 *s)
{
  Cnt_826AE958 *c;
  Pair_826AE958 *t, *o;
  P2_826AE958 *ty;
  P1_826AE958 *o1 = s->a;
  d->a.p = o1->p;
  d->a.p->rc = d->a.p->rc + 1;
  t = &d->b;
  o = s->b;
  t->x = o->x;
  ty = &t->y;
  c = o->y.p;
  if (c != 0) c->rc = (c->rc + 1) & 0x8fffffff;
  ty->p = o->y.p;
}
