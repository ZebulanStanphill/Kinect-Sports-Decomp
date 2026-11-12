/* Uploads four shader constant blocks, then (a.x, b.x, c.x, 0) to vertex constant 0x31 and pixel
   constant 0xe, and that vector scaled by the global settings' scale and colour to constant 0x7d. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Settings_825AFDF8 {
    char pad0[0x148];
    float scale;                /* 0x148 */
    char pad14c[0xb4];
    __vector4 color;            /* 0x200 */
    char pad210[0x10];
} Settings_825AFDF8;

extern Settings_825AFDF8 lbl_8326C070;

extern void fn_82543BE0(void *self, unsigned int index, const __vector4 *values, unsigned int count);
extern void fn_82543C70(void *self, unsigned int index, const __vector4 *values, unsigned int count);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);

    vx = __vrlimi(vx, vy, 0x4, 3);
    vz = __vrlimi(vz, vw, 0x4, 3);
    return __vrlimi(vx, vz, 0x3, 2);
}

static __forceinline __vector4 Replicate(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

void fn_825AFDF8(void *self, const __vector4 *a, const __vector4 *b, const __vector4 *c, const __vector4 *d)
{
    __vector4 v;

    fn_82543C70(self, 0x23, a, 2);
    fn_82543C70(self, 0x25, b, 2);
    fn_82543C70(self, 0x27, c, 2);
    fn_82543C70(self, 0x29, d, 1);
    v = VectorSet(a->vector4_f32[0], b->vector4_f32[0], c->vector4_f32[0], 0.0f);
    fn_82543C70(self, 0x31, &v, 1);
    fn_82543BE0(self, 0xe, &v, 1);
    v = __vmulfp(lbl_8326C070.color, __vmulfp(v, Replicate(lbl_8326C070.scale)));
    fn_82543C70(self, 0x7d, &v, 1);
}
