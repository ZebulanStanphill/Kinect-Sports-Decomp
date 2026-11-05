struct Iface_83005DC8;
typedef struct { char pad[0x98]; void (*f98)(struct Iface_83005DC8 *, unsigned short); } Vt_83005DC8;
typedef struct Iface_83005DC8 { Vt_83005DC8 *vt; } Iface_83005DC8;
typedef struct { char pad0[0x4]; Iface_83005DC8 *x4; } Hold_83005DC8;
typedef struct {
  char pad0[0x10];
  Iface_83005DC8 *f10;
  Iface_83005DC8 *f14;
  short pad18;
  unsigned short cnt;
  char pad1c[0x44 - 0x1c];
  Hold_83005DC8 *f44;
} Obj_83005DC8;

void fn_83005DC8(Obj_83005DC8 *o, unsigned short flags)
{
  Iface_83005DC8 *p;
  o->cnt = o->cnt - 1;
  if ((flags & 1) != 0) {
    p = o->f14;
    if (p != 0) {
      flags = flags & 0xfffe;
      p->vt->f98(p, 3);
    }
  }
  if ((flags & 2) != 0 && o->f44 != 0) {
    if (o->f44->x4 != 0) {
      flags = flags & 0xfffd;
      o->f44->x4->vt->f98(o->f44->x4, 3);
    }
  }
  p = o->f10;
  if (p != 0)
    p->vt->f98(p, flags);
}
