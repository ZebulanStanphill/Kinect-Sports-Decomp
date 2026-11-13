typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Pair_82D8CD48 {
    __vector4 v0;
    __vector4 v1;
} Pair_82D8CD48;

typedef struct Obj_82D8CD48 {
    char pad00[0xb0];
    Pair_82D8CD48 pair;
} Obj_82D8CD48;

void fn_82D8CD48(const Obj_82D8CD48 *self, Pair_82D8CD48 *out)
{
    const Pair_82D8CD48 *src = &self->pair;

    out->v0 = src->v0;
    out->v1 = src->v1;
}
