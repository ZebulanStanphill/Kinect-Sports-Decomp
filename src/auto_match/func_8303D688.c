typedef struct Vec_8303D688 { float x, y, z; } Vec_8303D688;
typedef struct Obj_8303D688 { char pad[0x28]; Vec_8303D688 v; int value; } Obj_8303D688;

void fn_8303D688(Obj_8303D688 *self, float x, int value, float y, float z)
{
    Vec_8303D688 *v = &self->v;
    v->x = x; v->y = y; v->z = z; self->value = value;
}
