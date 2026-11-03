extern void fn_82A77C10(void *self);
typedef struct Iface_82A78648 Iface_82A78648;
struct Iface_82A78648 { struct { char pad[0x14]; int (*f14)(Iface_82A78648 *p, unsigned int *a); } *vt; };
typedef struct { char pad[0x108]; Iface_82A78648 *p; } Self_82A78648;

int fn_82A78648(Self_82A78648 *self, unsigned int flags)
{
  int r = 0;
  unsigned int a[2];

  a[0] = flags;
  if (self->p != 0) {
    r = self->p->vt->f14(self->p, a);
    if (r < 0) return r;
  }
  if ((a[0] & 0x1000) != 0) {
    fn_82A77C10(self);
  }
  return r;
}
