/* Picks a random point on a disc around `position`: random angle (0..2*pi) and a random
   radius scaled by (1 - *owner->accuracy) * settings[15]. The polar offset comes from
   fn_8255A160(origin, angle, radius), started from the reserved zero vector (v77). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

extern unsigned int lbl_83265A28;           /* random seed */
extern const float lbl_821CA45C[2];         /* [1] = 1.0f */
extern const float lbl_82193E2C;            /* 2 * pi */
extern float lbl_831CCDA8[];

extern __vector4 fn_8255A160(__vector4 origin, float angle, float radius);

typedef struct Owner_822F5C40 {
    char pad[0x20];
    float *accuracy;
} Owner_822F5C40;

typedef union FloatBits_822F5C40 {
    unsigned int u;
    float f;
} FloatBits_822F5C40;

static __forceinline float Random01(void)
{
    FloatBits_822F5C40 bits;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    bits.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return bits.f - lbl_821CA45C[1];
}

__vector4 *fn_822F5C40(__vector4 *result, Owner_822F5C40 *owner, __vector4 position)
{
    float spread = (lbl_821CA45C[1] - *owner->accuracy) * lbl_831CCDA8[15];
    float radius = Random01() * spread;
    float angle = Random01() * lbl_82193E2C;
    __vector4 offset = fn_8255A160(__VMXGetReg(77), angle, radius);

    *result = __vaddfp(offset, position);
    return result;
}
