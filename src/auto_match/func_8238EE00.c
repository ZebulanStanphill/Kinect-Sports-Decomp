typedef struct Iface Iface;
typedef struct IfaceVt { void *pad[1]; void (*f4)(Iface *, void *); void *pad2[2]; void (*f10)(Iface *, int, int); void (*f14)(Iface *, int, void *); } IfaceVt;
struct Iface { IfaceVt *vt; };
typedef struct Sub38 { char pad[0x10]; Iface *w; } Sub38;
typedef struct Pair { int first; unsigned second; } Pair;
typedef struct M_8238EE00 {
  char pad[0x38];
  Iface *a38;
  char pad2[0xc];
  Iface *a48;
  char pad3[0x1c];
  Iface *a68;
} M;
typedef struct Obj_8238EE00 { char pad[0x78]; struct { char pad[0x168]; M m; } *x; } Obj;
extern void *fn_8265C9E0(int);
extern int fn_822D7FE0(void *);
extern void fn_822D79D8(Pair *, int);
extern void fn_828E9D90(int);
extern void fn_828E9D40(int);
extern void fn_828E2B28(void *, Pair *);
extern void fn_822315A0(unsigned);

void fn_8238EE00(Obj *o, int arg)
{
  M *m = &o->x->m;
  void *p;
  int q;
  Pair pr;
  char buf[0x90];
  p = fn_8265C9E0(0x28);
  if (p != 0) q = fn_822D7FE0(p); else q = 0;
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, q);
  m->a68->vt->f10(m->a68, pr.first, arg);
  if (m->a48 != 0) {
    Sub38 *s;
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    s = (Sub38 *)&m->a38;
    m->a68->vt->f14(m->a68, pr.first, buf);
    if (s->w != 0)
      s->w->vt->f4(s->w, buf);
  }
  fn_828E2B28(m, &pr);
  if (pr.second != 0) fn_822315A0(pr.second);
}
