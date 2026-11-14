typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D41930 {
    char pad0[0x80];
    __vector4 value; /* 0x80 */
} Obj_82D41930;

void fn_82D41930(Obj_82D41930 *self, const __vector4 *value)
{
    self->value = *value;
}
