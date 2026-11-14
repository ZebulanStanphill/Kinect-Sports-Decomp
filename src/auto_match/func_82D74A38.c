typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Obj_82D74A38 {
    char pad0[0x18];
    float value;
    char pad1c[4];
    __vector4 vec;
} Obj_82D74A38;

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

void fn_82D74A38(Obj_82D74A38 *self)
{
    SetZero(&self->vec);
    self->value = -1.0f;
}
