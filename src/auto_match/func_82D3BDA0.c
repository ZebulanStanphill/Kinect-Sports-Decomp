typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D3BDA0 {
    char pad0[0x30];
    __vector4 value; /* 0x30 */
} Obj_82D3BDA0;

void fn_82D3BDA0(Obj_82D3BDA0 *self, __vector4 *out)
{
    *out = self->value;
}
