typedef struct Obj { int a; int b; int refs; } Obj;
typedef struct Ptr { Obj *p; int pad[1]; int q; } Ptr;
extern void fn_826944C8(Obj *o);
extern void fn_82695FA0(int *d, int *s);

Ptr *fn_826A95D8(Ptr *d, Ptr *s)
{
  Obj *n = s->p;
  Obj *o;
  n->refs++;
  o = d->p;
  if (--o->refs == 0) {
    fn_826944C8(o);
  }
  d->p = n;
  fn_82695FA0(&d->q, &s->q);
  return d;
}
