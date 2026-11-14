typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D6F6E0 {
    char pad0[0x18];
    const __vector4 *value; /* 0x18 */
} Obj_82D6F6E0;

void fn_82D6F6E0(Obj_82D6F6E0 *self, __vector4 *out)
{
    *out = *self->value;
}
