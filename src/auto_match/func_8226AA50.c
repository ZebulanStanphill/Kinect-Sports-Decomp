/* Returns the up or down unit vector (y = -1 when value is not negative, else +1). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Object_8226AA50 {
    char padding[0x24];
    float value; /* 0x24 */
} Object_8226AA50;

void fn_8226AA50(__vector4 *out, Object_8226AA50 *object)
{
    __vector4 direction = __VMXGetReg(77);

    direction.vector4_f32[1] = object->value >= 0.0f ? -1.0f : 1.0f;
    *out = direction;
}
