// Runs the filter fn_82A108B0 on (a, b) with three replicated settings of the object and stores
// a with its w replaced by the filter result's w to an unaligned float4.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
void __stvlx(__vector4 v, void *base, int offset);
void __stvrx(__vector4 v, void *base, int offset);

typedef struct Float4_82A13D48 {
    float x, y, z, w;
} Float4_82A13D48;

typedef struct Obj_82A13D48 {
    char pad0[0x1b48];
    float scaleA;       // 0x1b48
    float scaleB;       // 0x1b4c
    void *state;        // 0x1b50
    char pad1b54[0x7c];
    float scaleC;       // 0x1bd0
} Obj_82A13D48;

__vector4 fn_82A108B0(void *current, void *previous, __vector4 a, __vector4 b, __vector4 c,
                      __vector4 d, __vector4 e);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline void StoreFloat4(Float4_82A13D48 *dst, __vector4 v)
{
    __stvlx(v, dst, 0);
    __stvrx(v, dst, 16);
}

void fn_82A13D48(Obj_82A13D48 *self, Float4_82A13D48 *out, __vector4 a, __vector4 b)
{
    __vector4 r;

    r = fn_82A108B0(self->state, self->state, Replicate(self->scaleA), Replicate(self->scaleB),
                    a, b, Replicate(self->scaleC));
    a = __vrlimi(a, r, 1, 0);
    StoreFloat4(out, a);
}
