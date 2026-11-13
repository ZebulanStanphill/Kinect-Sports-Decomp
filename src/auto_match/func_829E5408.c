typedef struct { int f0; float x, y, z; } Obj_829E5408;

int fn_829E5408(Obj_829E5408 *self, float *x, float *y, float *z)
{
    *x = self->x;
    *y = self->y;
    *z = self->z;
    return 0;
}
