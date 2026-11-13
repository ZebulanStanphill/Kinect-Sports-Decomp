typedef struct Obj_827FA7C8 { char pad0[0x44]; float x, y, z; } Obj_827FA7C8;

void fn_827FA7C8(const Obj_827FA7C8 *self, float *x, float *y, float *z)
{
  *x = self->x;
  *y = self->y;
  *z = self->z;
}
