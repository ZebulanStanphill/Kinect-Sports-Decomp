extern int KeGetCurrentProcessType(void);

typedef struct Obj_82643CE0 {
  char pad0[0x30];
  char *p30;
  char *p34;
  char *p38;
  char pad3c[0x2abd - 0x3c];
  unsigned char flags;
  char pad2abe[0x4230 - 0x2abe];
  char *p4230;
} Obj_82643CE0;

void fn_82643CE0(Obj_82643CE0 *self)
{
  char *base;
  char *end;

  if (KeGetCurrentProcessType() == 2) {
    base = (char *)self + 0x4230;
    end = base + 0x12c0;
    self->p30 = base;
    self->p34 = end;
    self->p38 = end - 0xa0;
  } else {
    base = self->p4230;
    end = base + 0x12c0;
    self->p34 = end;
    self->p30 = base;
    self->p38 = end - 0xa0;
  }
  self->flags |= 0x20;
}
