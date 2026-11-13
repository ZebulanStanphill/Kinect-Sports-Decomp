typedef struct Obj_82F4EFD0 { char pad0[0xce0]; float x, y, z; } Obj_82F4EFD0;

void fn_82F4EFD0(const Obj_82F4EFD0 *self, float *x, float *y, float *z)
{
  *x = self->x;
  *y = self->y;
  *z = self->z;
}
