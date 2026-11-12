/* Facing direction of the object: when the angle flag (0xa8 bit 0) is set it is built from the
   two stored angles (fn_8255A1C8), otherwise the reference axis (reserved register 68, w
   cleared) is rotated by the orientation quaternion at 0x40 (conjugate * v * q) and
   normalised. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern const float lbl_82192730[7];

typedef struct Object_82561880 {
    char pad0[0x40];
    __vector4 orientation;       /* 0x40 */
    float yaw;                   /* 0x50 */
    float pitch;                 /* 0x54 */
    char pad58[0xa8 - 0x58];
    unsigned int flags;          /* 0xa8 */
} Object_82561880;

extern __vector4 fn_8255A1C8(float yaw, float pitch, __vector4 base, float scale);

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

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

void fn_82561880(const Object_82561880 *self, __vector4 *out)
{
    if (self->flags & 1) {
        __vector4 zero = __VMXGetReg(77);
        *out = fn_8255A1C8(self->yaw, self->pitch, zero, lbl_82192730[1]);
    } else {
        __vector4 sign = __vspltisw(-1);
        __vector4 q = self->orientation;
        __vector4 axis = __vrlimi(__vspltisw(0), __VMXGetReg(68), 0xe, 0);
        __vector4 conj, r;

        sign = __vslw(sign, sign);
        conj = __vrlimi(__vxor(q, sign), q, 1, 0);
        r = QuaternionMultiply(conj, axis, sign);
        r = QuaternionMultiply(r, q, sign);
        *out = Normalize3(r);
    }
}
