extern unsigned fn_82C53960(int, int);
extern void fn_82C53970(unsigned);

typedef struct Obj_82CC6230 {
  char pad0[0x14];
  int f14;
  int f18;
  int f1c;
  int f20;
  int f24;
  int f28;
  char pad2c[0x3c - 0x2c];
  unsigned f3c;
} Obj_82CC6230;

unsigned fn_82CC6230(Obj_82CC6230 *self, int param_2, int param_3, int param_4, int param_5)
{
  unsigned r;
  int w, h;
  if (param_3 < 0)
    param_3 = -param_3;
  if (param_5 < 0)
    param_5 = -param_5;
  self->f18 = param_2;
  self->f1c = param_3;
  self->f20 = param_4;
  self->f24 = param_5;
  self->f28 = 0;
  if (self->f3c != 0) {
    fn_82C53970(self->f3c);
    self->f3c = 0;
  }
  w = param_2 <= param_4 ? param_4 : param_2;
  h = param_3 <= param_5 ? param_5 : param_3;
  r = fn_82C53960((h + 2) * (w + 2) * 4, 0);
  self->f3c = r;
  if (r == 0)
    return r;
  self->f14 = 1;
  return 1;
}
