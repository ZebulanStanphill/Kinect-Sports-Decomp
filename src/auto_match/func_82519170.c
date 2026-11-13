typedef struct Fn_82519170 Fn_82519170;
typedef struct { Fn_82519170 *(*clone)(Fn_82519170 *, void *); } FnVt_82519170;
struct Fn_82519170 { FnVt_82519170 *vt; };
typedef struct { char pad[0x10]; Fn_82519170 *impl; } Func_82519170;
typedef struct {
  char name[0x1c];
  int a1c;
  int a20;
  unsigned char a24;
  char pad25[3];
  int a28;
  int a2c;
  int a30;
  int a34;
  Func_82519170 func;
} Obj_82519170;
extern void fn_8223B688(void *dst, const void *src);

Obj_82519170 *fn_82519170(Obj_82519170 *o, const Obj_82519170 *s)
{
  Func_82519170 *d;
  const Func_82519170 *f;
  fn_8223B688(o->name, s->name);
  f = &s->func;
  d = &o->func;
  o->a1c = s->a1c;
  o->a20 = s->a20;
  o->a24 = s->a24;
  o->a28 = s->a28;
  o->a2c = s->a2c;
  o->a30 = s->a30;
  o->a34 = s->a34;
  if (f->impl == 0) {
    d->impl = 0;
  } else {
    if ((void *)f->impl == (void *)f) {
      d->impl = f->impl->vt->clone(f->impl, d);
    } else {
      d->impl = f->impl->vt->clone(f->impl, 0);
    }
  }
  return o;
}
