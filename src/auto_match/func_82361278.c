typedef struct Iface_82361278 Iface_82361278;
struct Iface_82361278 { void **vt; };
typedef struct { int pad[4]; Iface_82361278 *f; } Sub_82361278;
typedef struct { void *vt; int pad; Sub_82361278 sub; } Obj_82361278;
extern char lbl_821B2930[];
extern char lbl_821CB794[];
typedef void (*Fn)(Iface_82361278 *, int);
void fn_82361278(Obj_82361278 *self)
{
  Sub_82361278 *s = &self->sub;
  self->vt = lbl_821B2930;
  if (s->f != 0) { ((Fn)s->f->vt[3])(s->f, (void *)s->f != (void *)s); s->f = 0; }
  self->vt = lbl_821CB794;
}
