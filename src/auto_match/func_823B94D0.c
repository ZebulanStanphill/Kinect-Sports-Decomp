typedef struct Iface_823B94D0 Iface_823B94D0;
struct Iface_823B94D0 { void **vt; };
typedef struct { int pad[4]; Iface_823B94D0 *f; } Sub_823B94D0;
typedef struct { void *vt; int pad; Sub_823B94D0 sub; } Obj_823B94D0;
extern char lbl_821B5C24[];
extern char lbl_821CB794[];
typedef void (*Fn)(Iface_823B94D0 *, int);
void fn_823B94D0(Obj_823B94D0 *self)
{
  Sub_823B94D0 *s = &self->sub;
  self->vt = lbl_821B5C24;
  if (s->f != 0) { ((Fn)s->f->vt[3])(s->f, (void *)s->f != (void *)s); s->f = 0; }
  self->vt = lbl_821CB794;
}
