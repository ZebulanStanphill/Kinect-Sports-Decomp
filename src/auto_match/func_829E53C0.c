typedef struct Obj_829E53C0 {
    int pad0;
    float x;
    float y;
    float z;
} Obj_829E53C0;

long fn_829E53C0(Obj_829E53C0 *self, float x, float y, float z)
{
    if (x < 0.0f)
        return 0x80070057;
    if (y <= 0.0f)
        return 0x80070057;
    if (z <= 0.0f)
        return 0x80070057;
    self->x = x;
    self->y = y;
    self->z = z;
    return 0;
}
