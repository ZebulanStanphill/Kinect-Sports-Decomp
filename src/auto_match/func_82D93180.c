typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D93180 {
    char pad0[0xe0];
    __vector4 value; /* 0xe0 */
} Obj_82D93180;

void fn_82D93180(Obj_82D93180 *self, const __vector4 *value)
{
    self->value = *value;
}
