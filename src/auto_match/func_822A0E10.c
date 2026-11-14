typedef struct Target_822A0E10 { char pad[8]; int mode; } Target_822A0E10;
typedef struct Self_822A0E10 {
  char pad0[0xc];
  Target_822A0E10 *target;
  char pad1[0x2c - 0x10];
  unsigned int kind;
  int f30;
  int f34;
} Self_822A0E10;
extern void fn_8229F4F8(Target_822A0E10 *t, int mode);

void fn_822A0E10(Self_822A0E10 *self, int enable)
{
  int on;
  int mode;
  Target_822A0E10 *t;

  on = enable != 0 && self->f30 != 0;
  switch (self->kind) {
  case 0:
    if (self->f34 != 0) {
      mode = on ? 17 : 8;
    } else {
      mode = on ? 9 : 0;
    }
    break;
  case 1:
    mode = on ? 11 : 2;
    break;
  case 2:
    mode = on ? 12 : 3;
    break;
  default:
    mode = 0;
    break;
  }
  t = self->target;
  if (mode != t->mode) {
    fn_8229F4F8(t, mode);
  }
}
