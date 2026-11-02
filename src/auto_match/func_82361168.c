typedef struct Iface_82361168 Iface_82361168;
struct Iface_82361168 { void **vt; };
typedef struct { int pad[4]; Iface_82361168 *f; } Sub_82361168;
typedef struct { void *vt; int pad; Sub_82361168 sub; } Obj_82361168;
extern char lbl_821B28F8[];
extern char lbl_821CB794[];
typedef void (*Fn)(Iface_82361168 *, int);
void fn_82361168(Obj_82361168 *self)
{
  Sub_82361168 *s = &self->sub;
  self->vt = lbl_821B28F8;
  if (s->f != 0) { ((Fn)s->f->vt[3])(s->f, (void *)s->f != (void *)s); s->f = 0; }
  self->vt = lbl_821CB794;
}
