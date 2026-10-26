typedef struct Obj { int a; int b; int refs; } Obj;
typedef struct Ptr { Obj *p; int q; } Ptr;
typedef struct Src { Obj **pp; int q; } Src;
extern void fn_826944C8(Obj *o);
extern void fn_826FE9F8(int *d, int s);

void fn_82702BF0(Ptr *d, Src *s)
{
  Obj *n = *s->pp;
  Obj *o;
  n->refs++;
  o = d->p;
  if (--o->refs == 0) {
    fn_826944C8(o);
  }
  d->p = n;
  fn_826FE9F8(&d->q, s->q);
}
