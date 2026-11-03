typedef struct Iface_824F0CE8 Iface_824F0CE8;
typedef struct VT_824F0CE8 {
  void *(*f0)(Iface_824F0CE8 *, int);
  char pad[0x54 - 4];
  void (*f54)(Iface_824F0CE8 *, unsigned);
} VT_824F0CE8;
struct Iface_824F0CE8 { VT_824F0CE8 *vt; };

typedef struct Obj_824F0CE8 {
  int *vt;
  int f4;
  Iface_824F0CE8 *f8;
  char pad[0x50 - 0xc];
  unsigned f50;
  Iface_824F0CE8 *f54;
} Obj_824F0CE8;

extern int lbl_821C1A3C[];

void fn_824F0CE8(Obj_824F0CE8 *self)
{
  self->vt = lbl_821C1A3C;
  if (self->f8 != 0) {
    if (self->f50 != 0)
      self->f8->vt->f54(self->f8, self->f50);
    self->f50 = 0;
    if (self->f8 != 0)
      self->f8->vt->f0(self->f8, 1);
    self->f8 = 0;
  }
  if (self->f54 != 0)
    self->f54->vt->f0(self->f54, 1);
}
