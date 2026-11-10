typedef struct { char pad0[0x3c]; int id; char pad40[0x38]; unsigned char ready; } Obj_82878C80;
extern int fn_82FEB810(int id);

int fn_82878C80(Obj_82878C80 *self)
{
  if (self->ready != 0) {
    return 1;
  }
  return fn_82FEB810(self->id);
}
