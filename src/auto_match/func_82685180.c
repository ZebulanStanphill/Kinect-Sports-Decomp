typedef struct Iface_82685180 Iface_82685180;
typedef struct { void *f[3]; int (*m)(Iface_82685180 *); } Vt_82685180;
struct Iface_82685180 { Vt_82685180 *vt; };
typedef struct { char pad[0xc]; Iface_82685180 *p; } Obj_82685180;
int fn_82685180(Obj_82685180 *self)
{
  int p = (int)self->p;
  if (p == 0) return p;
  return ((Iface_82685180 *)p)->vt->m((Iface_82685180 *)p);
}
