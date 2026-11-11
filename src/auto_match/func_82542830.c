// Sets one vector shader constant in both constant tables of the device wrapper (register
// 0x1a through fn_82543BE0, register 0x80 through fn_82543C70) to ((index + 1) / 16, 0, 0, 0),
// or to zero when the index is 0xff. The vector is built the way XNA Math's XMVectorSet does
// on the VMX128 unit (four lvlx loads merged with vrlimi).
// The 0.0f literals are the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

extern const float lbl_821CA45C[2];
extern const float lbl_821954B0[];

extern void fn_82543BE0(void *self, unsigned int index, const __vector4 *values, unsigned int count);
extern void fn_82543C70(void *self, unsigned int index, const __vector4 *values, unsigned int count);

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

void fn_82542830(void *self, int index)
{
    float value;
    __vector4 v;

    if (index != 0xff) {
        value = ((float)index + lbl_821CA45C[1]) * lbl_821954B0[0x340 / 4];
    } else {
        value = 0.0f;
    }
    v = VectorSet(value, 0.0f, 0.0f, 0.0f);
    fn_82543BE0(self, 0x1a, &v, 1);
    fn_82543C70(self, 0x80, &v, 1);
}
