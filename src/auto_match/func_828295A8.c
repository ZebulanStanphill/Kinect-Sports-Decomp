typedef struct {
  char pad0[0x14];
  void *owner;
  char pad18[0x2c];
  int value;
} Obj_828295A8;

void fn_828295A8(Obj_828295A8 *self, int *out)
{
  *out = self->owner != 0 ? self->value : 0;
}
