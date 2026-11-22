/* Returns the down or up unit vector (y = -1 when the point lies at or beyond x, else +1). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Object_8226AC78 {
    char padding[0x1c];
    float x; /* 0x1c */
} Object_8226AC78;

void fn_8226AC78(__vector4 *out, Object_8226AC78 *object, const float *point)
{
    __vector4 direction = __VMXGetReg(77);

    direction.vector4_f32[1] = *point - object->x >= 0.0f ? -1.0f : 1.0f;
    *out = direction;
}
