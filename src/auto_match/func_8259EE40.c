// Writes the constant vector (0, 0, 1, 0) to *out; the object itself is not used.
// The vector is built the way XNA Math's XMVectorSet does (four lvlx loads merged with vrlimi).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

extern const float lbl_821CA45C[2];
extern const float ltcg_pool_0_0f;

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vy = __vrlimi(vy, vw, 0x4, 3);
    vx = __vrlimi(vx, vz, 0x4, 3);
    return __vrlimi(vx, vy, 0x3, 2);
}

void fn_8259EE40(void *self, __vector4 *out)
{
    *out = VectorSet(ltcg_pool_0_0f, ltcg_pool_0_0f, lbl_821CA45C[1], ltcg_pool_0_0f);
}
