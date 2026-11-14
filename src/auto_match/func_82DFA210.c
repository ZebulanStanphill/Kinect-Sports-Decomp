typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Pair_82DFA210 {
    __vector4 a;
    __vector4 b;
} Pair_82DFA210;

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

void fn_82DFA210(Pair_82DFA210 *self)
{
    SetZero(&self->a);
    SetZero(&self->b);
}
