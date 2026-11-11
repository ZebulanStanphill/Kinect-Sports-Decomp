typedef struct Vec_8303D1C0 { float x, y, z; } Vec_8303D1C0;
typedef struct Obj_8303D1C0 { char pad[0x28]; Vec_8303D1C0 v; int value; } Obj_8303D1C0;

void fn_8303D1C0(Obj_8303D1C0 *self, float x, int value, float y, float z)
{
    Vec_8303D1C0 *v = &self->v;

    v->x = x;
    v->y = y;
    v->z = z;
    self->value = value;
}
