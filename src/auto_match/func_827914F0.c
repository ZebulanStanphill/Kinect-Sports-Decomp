typedef struct Obj Obj;
typedef struct { Obj *p; int b; unsigned short c; } Ref;
extern void fn_8267C4C8(Obj *p);
extern void fn_8267C4F0(Obj *p);

Ref *fn_827914F0(Ref *d, const Ref *s)
{
  if ((int)s->p != 0) {
    fn_8267C4C8(s->p);
  }
  if (d->p != 0) {
    fn_8267C4F0(d->p);
  }
  d->p = s->p;
  d->b = s->b;
  d->c = s->c;
  return d;
}
