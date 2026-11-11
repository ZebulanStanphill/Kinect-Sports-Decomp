typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vcmpbfpR(__vector4 a, __vector4 b, unsigned int *cr);

extern const float lbl_821954B0[];
extern void fn_8255DB38(void *self, __vector4 *min, __vector4 *max);

typedef struct {
    __vector4 min;
    __vector4 max;
} Aabb_825998B0;

typedef struct {
    Aabb_825998B0 cur;
    Aabb_825998B0 last;
} Bounds_825998B0;

typedef struct {
    char pad[0x940];
    Bounds_825998B0 bounds;
} Owner_825998B0;

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline void SetAabb(Aabb_825998B0 *a, __vector4 min, __vector4 max)
{
    a->min = min;
    a->max = max;
}

static __forceinline int InBounds3(__vector4 v, __vector4 bounds)
{
    unsigned int cr = 0;
    __vector4 c = __vrlimi(v, bounds, 1, 0);
    __vcmpbfpR(c, bounds, &cr);
    return (cr & 0x20) == 0x20;
}

int fn_825998B0(Owner_825998B0 *self)
{
    __vector4 min;
    __vector4 max;
    Bounds_825998B0 *b = &self->bounds;
    __vector4 tolerance;

    fn_8255DB38(self, &min, &max);
    tolerance = Replicate(lbl_821954B0[0x74]);
    if (InBounds3(__vsubfp(min, b->cur.min), tolerance) && InBounds3(__vsubfp(max, b->cur.max), tolerance)) {
        return 0;
    }
    SetAabb(&b->cur, min, max);
    SetAabb(&b->last, min, max);
    return 1;
}
