typedef struct Obj_82FB40B0 {
  void *vt;
  char pad4[0x2c];
  unsigned f30;
  char pad34[0xc];
  int f40;
  unsigned char f44;
  char pad45[3];
  int f48;
  int f4c;
  unsigned char f50;
} Obj_82FB40B0;

extern void fn_82FAA6E0(Obj_82FB40B0 *, int, int, void *);
extern unsigned int lbl_8216D7E4;

Obj_82FB40B0 * fn_82FB40B0(Obj_82FB40B0 *self, int x, int y, void *ref, unsigned char flag)
{
  fn_82FAA6E0(self, x, y, ref);
  self->f50 = flag;
  self->f48 = 0;
  self->vt = &lbl_8216D7E4;
  self->f4c = 1;
  self->f40 = 0;
  self->f44 = 0;
  self->f30 = self->f30 & 0x7fffffff;
  return self;
}
