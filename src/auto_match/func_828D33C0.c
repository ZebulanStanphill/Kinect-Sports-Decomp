typedef struct Obj_828D33C0 {
  void *vt;
  char pad4[0x4c];
  void *f50;
  char pad54[0x2c];
  int f80;
  int f84;
  float f88;
} Obj_828D33C0;

extern int fn_828BDDA0();
extern unsigned int lbl_82025988;
extern unsigned int lbl_82025990;

Obj_828D33C0 * fn_828D33C0(Obj_828D33C0 *self, float x, int a)
{
  fn_828BDDA0(self);
  self->f88 = x;
  self->f84 = a;
  self->vt = &lbl_82025990;
  self->f50 = &lbl_82025988;
  self->f80 = 1;
  return self;
}
