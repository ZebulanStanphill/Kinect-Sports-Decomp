typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Pair_82D3BDB0 {
    __vector4 a;
    __vector4 b;
} Pair_82D3BDB0;

typedef struct Obj_82D3BDB0 {
    char pad00[0x20];
    Pair_82D3BDB0 pair;
} Obj_82D3BDB0;

Pair_82D3BDB0 *fn_82D3BDB0(const Obj_82D3BDB0 *self, Pair_82D3BDB0 *out)
{
    out->a = self->pair.a;
    out->b = self->pair.b;
    return out;
}
