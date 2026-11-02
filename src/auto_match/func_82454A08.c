typedef struct Iface_82454A08 Iface_82454A08;
struct Iface_82454A08 { void **vt; };
typedef struct { int pad[4]; Iface_82454A08 *f; } Sub_82454A08;
typedef struct { void *vt; int pad; Sub_82454A08 sub; } Obj_82454A08;
extern char lbl_821BA3B0[];
extern char lbl_821CB794[];
typedef void (*Fn)(Iface_82454A08 *, int);
void fn_82454A08(Obj_82454A08 *self)
{
  Sub_82454A08 *s = &self->sub;
  self->vt = lbl_821BA3B0;
  if (s->f != 0) { ((Fn)s->f->vt[3])(s->f, (void *)s->f != (void *)s); s->f = 0; }
  self->vt = lbl_821CB794;
}
