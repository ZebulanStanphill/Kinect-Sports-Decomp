// Havok (caller fn_82DC8030): blends two vector pairs towards the defaults in lbl_8323E280 by the
// factor at self+0x20. Arguments follow the caller: (self, r4, f1, r6, r7 pair, r8, r9 pair).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

extern const __vector4 lbl_82132D10;       /* (1, 1, 1, 1) */
extern const __vector4 lbl_8323E280[4];

typedef struct Self_82D9FFD0 {
    char pad0[0x20];
    float t;        /* 0x20 */
} Self_82D9FFD0;

static __forceinline __vector4 Replicate(const float *value)
{
    float f = *value;
    __vector4 v = __lvlx(&f, 0);
    return __vspltw(v, 0);
}

typedef struct Pair_82D9FFD0 {
    __vector4 v[2];
} Pair_82D9FFD0;

/* Each vector becomes (1 - t) * from + t * vector (Havok setInterpolate4 order). */
static __forceinline void InterpolatePair(Pair_82D9FFD0 *p, const __vector4 *from, __vector4 t)
{
    __vector4 a = p->v[0];
    __vector4 b = p->v[1];
    p->v[0] = __vmaddfp(t, a, __vmulfp(__vsubfp(lbl_82132D10, t), from[0]));
    p->v[1] = __vmaddfp(t, b, __vmulfp(__vsubfp(lbl_82132D10, t), from[1]));
}

void fn_82D9FFD0(Self_82D9FFD0 *self, void *a, float dt, void *b, Pair_82D9FFD0 *linear, void *c, Pair_82D9FFD0 *angular)
{
    __vector4 t = __vspltw(Replicate(&self->t), 0);

    InterpolatePair(linear, &lbl_8323E280[0], t);
    InterpolatePair(angular, &lbl_8323E280[2], t);
}
