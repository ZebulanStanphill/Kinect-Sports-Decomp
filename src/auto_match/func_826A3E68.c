typedef struct Rc { int a; int b; unsigned int cnt; } Rc;
typedef struct SP { Rc *ptr; Rc *cookie; } SP;
typedef struct Obj { int a; int b; SP sp; unsigned char f; unsigned char pad[3]; int x; int y; } Obj;
extern void fn_826C3378(SP *sp, Rc *c, int flag);

Obj *fn_826A3E68(Obj *d, Obj *s)
{
  SP *sp = &d->sp;
  d->a = s->a;
  d->b = s->b;
  d->f = 0;
  d->sp.ptr = s->sp.ptr;
  if (d->sp.ptr != 0) {
    d->sp.ptr->cnt = (d->sp.ptr->cnt + 1) & 0x8fffffff;
  }
  sp->cookie = 0;
  if (s->sp.cookie != 0) {
    fn_826C3378(sp, s->sp.cookie, s->f & 1);
  }
  d->x = s->x;
  d->y = s->y;
  return d;
}
