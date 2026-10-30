struct Iface_82E65EF8;
typedef struct IfaceVt_82E65EF8 {
  void *f0[2];
  void (*release)(struct Iface_82E65EF8 *);
} IfaceVt_82E65EF8;
typedef struct Iface_82E65EF8 { IfaceVt_82E65EF8 *vt; } Iface_82E65EF8;
typedef struct Obj_82E65EF8 {
  char pad0[0x18];
  Iface_82E65EF8 *f18;
  char pad1c[8];
  void *f24;
  char pad28[4];
  Iface_82E65EF8 *f2c;
  Iface_82E65EF8 *f30;
} Obj_82E65EF8;
extern void fn_82A1E658(void *);

void fn_82E65EF8(Obj_82E65EF8 *o)
{
  if (o->f18 != 0) {
    o->f18->vt->release(o->f18);
    o->f18 = 0;
  }
  if (o->f2c != 0) {
    o->f2c->vt->release(o->f2c);
    o->f2c = 0;
  }
  if (o->f30 != 0) {
    o->f30->vt->release(o->f30);
    o->f30 = 0;
  }
  if (o->f24 != 0) {
    fn_82A1E658(o->f24);
    o->f24 = 0;
  }
}
