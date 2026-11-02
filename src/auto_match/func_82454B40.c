typedef struct Iface_82454B40 Iface_82454B40;
struct Iface_82454B40 { void **vt; };
typedef struct { int pad[4]; Iface_82454B40 *f; } Sub_82454B40;
typedef struct { void *vt; int pad; Sub_82454B40 sub; } Obj_82454B40;
extern char lbl_821BA43C[];
extern char lbl_821CB794[];
typedef void (*Fn)(Iface_82454B40 *, int);
void fn_82454B40(Obj_82454B40 *self)
{
  Sub_82454B40 *s = &self->sub;
  self->vt = lbl_821BA43C;
  if (s->f != 0) { ((Fn)s->f->vt[3])(s->f, (void *)s->f != (void *)s); s->f = 0; }
  self->vt = lbl_821CB794;
}
