typedef struct Obj_82402BE8 { int pad0[4]; int id; int pad1[(0x240 - 0x14) / 4]; int table; int pad2[(0x290 - 0x244) / 4]; int flag; } Obj_82402BE8;
extern unsigned int fn_82359558(int, int);

void fn_82402BE8(Obj_82402BE8 *self, unsigned int value)
{
  if (value == fn_82359558(self->table, self->id)) {
    self->flag = 0;
  }
}
