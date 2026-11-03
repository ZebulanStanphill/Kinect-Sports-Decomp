extern int fn_82397F88(void *);
extern int fn_82399BA0(void *);
extern unsigned int fn_824CCD80(int);
extern void fn_825603C8(unsigned int, int, int);

typedef struct Obj_8239C3B8 {
  char pad0[0x30];
  int *p30;
  char pad34[0xa0 - 0x34];
  int pa0;
  char pad_a4[0x864 - 0xa4];
  int f864;
} Obj_8239C3B8;

void fn_8239C3B8(Obj_8239C3B8 *self, int param_2)
{
  int o;
  if (self->f864 != param_2) {
    self->f864 = param_2;
    if (param_2 != 0 && fn_82397F88(self) != 0) {
      if (self->pa0 == 0 || *(unsigned *)(self->pa0 + 0x40) != 1 || fn_82399BA0(self) == 0) {
        o = self->p30[2];
        if (*(int *)(o + 0x22c) != 1) {
          fn_825603C8(fn_824CCD80(*(int *)(o + 0x10)), o + 0x20, 1);
          *(int *)(o + 0x22c) = 1;
        }
      }
    }
  }
}
