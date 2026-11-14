typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D93170 {
    char pad0[0xd0];
    __vector4 value; /* 0xd0 */
} Obj_82D93170;

void fn_82D93170(Obj_82D93170 *self, const __vector4 *value)
{
    self->value = *value;
}
