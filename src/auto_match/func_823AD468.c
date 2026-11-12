typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Config_823AD468 {
    char pad0[0xa8];
    float scale;                 /* 0xa8 */
    char padac[0x8bc - 0xac];
    float speed;                 /* 0x8bc */
} Config_823AD468;

typedef struct Source_823AD468 {
    Config_823AD468 *config;     /* 0x0 */
    char pad4[0x3c];
    unsigned short index;        /* 0x40 */
    char pad42[2];
    int id;                      /* 0x44 */
} Source_823AD468;

extern float lbl_831D2C60;

extern __vector4 *fn_823AC058(__vector4 *out);
extern void fn_822B6A58(__vector4 *out, int id, unsigned short index);

static __forceinline __vector4 QuaternionMultiply(__vector4 a, __vector4 b, __vector4 sign)
{
    __vector4 neg = __vxor(a, sign);
    __vector4 ax = neg, ay = neg, az = neg, aw = neg;
    __vector4 rx, ry, rz, rw;

    ax = __vrlimi(ax, a, 0xb, 0);
    ay = __vrlimi(ay, a, 0xd, 0);
    aw = __vrlimi(aw, a, 0x1, 0);
    az = __vrlimi(az, a, 0x7, 0);
    rx = __vmsum4fp(ax, __vpermwi(b, 228));
    ry = __vmsum4fp(ay, __vpermwi(b, 177));
    rz = __vmsum4fp(az, __vpermwi(b, 78));
    rw = __vmsum4fp(aw, b);
    return __vmrghw(__vmrghw(rx, rz), __vmrghw(ry, rw));
}

__vector4 *fn_823AD468(__vector4 *out, const Source_823AD468 *src)
{
    __vector4 tmp;
    __vector4 offset;
    __vector4 q = *fn_823AC058(&tmp);
    __vector4 sign = __vspltisw(-1);
    __vector4 axis = __vrlimi(__vspltisw(0), __VMXGetReg(71), 0xe, 0);
    __vector4 conj, r;
    float scale;

    sign = __vslw(sign, sign);
    conj = __vrlimi(__vxor(q, sign), q, 1, 0);
    r = QuaternionMultiply(conj, axis, sign);
    scale = src->config->speed * src->config->scale * lbl_831D2C60;
    fn_822B6A58(&offset, src->id, src->index);
    r = QuaternionMultiply(r, q, sign);
    *out = __vmaddfp(r, __vspltw(__lvlx(&scale, 0), 0), offset);
    return out;
}
