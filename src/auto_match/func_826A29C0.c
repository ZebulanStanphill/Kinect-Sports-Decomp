typedef struct RC { int pad[2]; unsigned int ref; } RC;
typedef struct Ptr { RC *p; void *q; unsigned char flags; } Ptr;
typedef struct Obj { int a; int b; Ptr ptr; int c; int d; } Obj;
extern void fn_826C3378(Ptr *p, void *q, int f);
static void Ptr_copy(Ptr *d, Ptr *s)
{
  d->flags = 0;
  d->p = s->p;
  if (d->p)
    d->p->ref = (d->p->ref + 1) & 0x8fffffff;
  d->q = 0;
  if (s->q)
    fn_826C3378(d, s->q, s->flags & 1);
}
Obj *fn_826A29C0(Obj *o, int a, int b, Ptr *s, int c, int d)
{
  o->a = a;
  o->b = b;
  Ptr_copy(&o->ptr, s);
  o->c = c;
  o->d = d;
  return o;
}
