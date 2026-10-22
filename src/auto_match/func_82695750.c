typedef struct Obj { int a; int b; unsigned int refs; } Obj;
typedef struct Sub { Obj *p; void *q; unsigned char flag; } Sub;
typedef struct Dst { unsigned char type; Sub sub; } Dst;
extern void fn_826C3378(Sub *s, void *q, int f);

Dst *fn_82695750(Dst *d, Sub *s)
{
  Sub *sub;
  Obj *o;

  d->type = 8;
  sub = &d->sub;
  sub->flag = 0;
  o = s->p;
  sub->p = o;
  if (o != 0)
    o->refs = (o->refs + 1) & 0x8fffffff;
  sub->q = 0;
  if (s->q != 0)
    fn_826C3378(sub, s->q, s->flag & 1);
  return d;
}
