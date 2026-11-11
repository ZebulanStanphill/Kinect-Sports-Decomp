typedef struct Vec_8303CCF8 { float x, y, z; } Vec_8303CCF8;
typedef struct Obj_8303CCF8 { char pad[0x28]; Vec_8303CCF8 v; int value; } Obj_8303CCF8;

void fn_8303CCF8(Obj_8303CCF8 *self, float x, int value, float y, float z)
{
    Vec_8303CCF8 *v = &self->v;

    v->x = x;
    v->y = y;
    v->z = z;
    self->value = value;
}
