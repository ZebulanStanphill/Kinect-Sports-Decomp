typedef struct Obj_827FA7E8 { char pad0[0x64]; float x, y, z; } Obj_827FA7E8;

void fn_827FA7E8(const Obj_827FA7E8 *self, float *x, float *y, float *z)
{
  *x = self->x;
  *y = self->y;
  *z = self->z;
}
