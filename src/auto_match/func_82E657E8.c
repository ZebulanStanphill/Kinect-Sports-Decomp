extern unsigned int lbl_82155118;

typedef struct Iface_82E657E8 Iface_82E657E8;
typedef struct {
  void *f0[2];
  void (*f8)(Iface_82E657E8 *);
  void *fc;
  void (*f10)(Iface_82E657E8 *);
} Vt_82E657E8;
struct Iface_82E657E8 {
  Vt_82E657E8 *vt;
};
typedef struct Obj_82E657E8 {
  void *vt;
  int pad4;
  Iface_82E657E8 *f8;
} Obj_82E657E8;

void fn_82E657E8(Obj_82E657E8 *self)
{
  Iface_82E657E8 *p = self->f8;
  self->vt = &lbl_82155118;
  if (p != 0) {
    p->vt->f10(p);
  }
  if (self->f8 != 0) {
    self->f8->vt->f8(self->f8);
    self->f8 = 0;
  }
}
