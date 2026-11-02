typedef struct Iface_82361018 Iface_82361018;
struct Iface_82361018 { void **vt; };
typedef struct { int pad[4]; Iface_82361018 *f; } Sub_82361018;
typedef struct { void *vt; int pad; Sub_82361018 sub; } Obj_82361018;
extern char lbl_821B28A8[];
extern char lbl_821CB794[];
typedef void (*Fn)(Iface_82361018 *, int);
void fn_82361018(Obj_82361018 *self)
{
  Sub_82361018 *s = &self->sub;
  self->vt = lbl_821B28A8;
  if (s->f != 0) { ((Fn)s->f->vt[3])(s->f, (void *)s->f != (void *)s); s->f = 0; }
  self->vt = lbl_821CB794;
}
