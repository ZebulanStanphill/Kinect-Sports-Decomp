// Forward pass over a chain: out[0] is zero, and for every link out[i + 1] is the link's second
// transform (+0xc0) applied to (bias[i] - first transform applied to out[i]). Each element is a
// pair of vectors; fn_830B50C8 applies a link transform to a pair.
// The output is walked from out + 1 (v[i - 1], v[i]); the first transform goes through a local
// link pointer, which gives the original's index-first `add r4, r30, r11`.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Pair_830A7960 {
    __vector4 a;
    __vector4 b;
} Pair_830A7960;

typedef struct Link_830A7960 {
    char first[0xc0];       // 0x00
    char second[0x300];     // 0xc0
} Link_830A7960;

typedef struct Chain_830A7960 {
    int pad0;
    int count;              // 0x04
    char pad8[0x18];
    Link_830A7960 *links;   // 0x20
    char pad24[8];
    Pair_830A7960 *bias;    // 0x2c
} Chain_830A7960;

void fn_830B50C8(Pair_830A7960 *out, const void *transform, const Pair_830A7960 *in);

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void SetZeroPair(Pair_830A7960 *p)
{
    SetZero(&p->a);
    SetZero(&p->b);
}

void fn_830A7960(Chain_830A7960 *self, Pair_830A7960 *out)
{
    Pair_830A7960 tmp;
    Pair_830A7960 *v = out + 1;
    int i;

    SetZeroPair(&v[-1]);
    for (i = 0; i < self->count; i++) {
        const Pair_830A7960 *bias = &self->bias[i];
        Link_830A7960 *link = &self->links[i];

        fn_830B50C8(&tmp, link->first, &v[i - 1]);
        tmp.a = __vsubfp(bias->a, tmp.a);
        tmp.b = __vsubfp(bias->b, tmp.b);
        fn_830B50C8(&v[i], self->links[i].second, &tmp);
    }
}
