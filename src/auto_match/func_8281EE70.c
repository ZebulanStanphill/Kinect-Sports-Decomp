typedef struct Vec3_8281EE70 {
    float x, y, z;
} Vec3_8281EE70;

typedef struct Obj_8281EE70 {
    char pad[0xc];
    Vec3_8281EE70 scale;
} Obj_8281EE70;

extern void fn_828106A0(Obj_8281EE70 *self);

void fn_8281EE70(Obj_8281EE70 *self)
{
    Vec3_8281EE70 one;
    one.x = 1.0f;
    one.y = 1.0f;
    one.z = 1.0f;
    self->scale = one;
    fn_828106A0(self);
}
