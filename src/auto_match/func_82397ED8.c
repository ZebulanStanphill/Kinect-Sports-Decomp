typedef struct Obj_82397ED8 {
  char pad0[0x54];
  unsigned int width;
  unsigned int height;
  char pad5c[0x2a0 - 0x5c];
  int enabled;
} Obj_82397ED8;

int fn_82397ED8(Obj_82397ED8 *self)
{
  if (self->enabled != 0) {
    int is7 = self->width == 7;
    int is16 = self->width == 16 && self->height == 16;
    if (is7 || is16)
      return 1;
  }
  return 0;
}
