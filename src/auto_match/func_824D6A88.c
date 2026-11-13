// Offset point of a skeleton attachment in world space: one of three float3 offsets of
// the tuning block lbl_831D40A8 (mode 1/2/3, joint index 4, 12/13 or 18/19 by side),
// x mirrored for side 0, transformed by the joint matrix (fn_822B6AE0 or fn_822B6BB8)
// with w cleared. Zero when the object has no skeleton.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_824D6A88 {
    __vector4 r[4];
} Matrix_824D6A88;

typedef struct Float3_824D6A88 {
    float x, y, z;
} Float3_824D6A88;

typedef struct Tuning_824D6A88 {
    char pad0[0x184];
    Float3_824D6A88 offset1;    /* 0x184 */
    Float3_824D6A88 offset2;    /* 0x190 */
    Float3_824D6A88 offset3;    /* 0x19c */
} Tuning_824D6A88;

typedef struct Owner_824D6A88 {
    char pad0[0x164];
    void *skeleton;             /* 0x164 */
} Owner_824D6A88;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __VMXGetReg(int n);

extern Tuning_824D6A88 lbl_831D40A8;
extern const __vector4 lbl_8329EA30;   /* x lane select mask */
extern Matrix_824D6A88 *fn_822B6AE0(Matrix_824D6A88 *out, void *skeleton, int joint);
extern Matrix_824D6A88 *fn_822B6BB8(Matrix_824D6A88 *out, void *skeleton, int joint);

static __forceinline __vector4 LoadFloat3(const Float3_824D6A88 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 LoadOffset(const Float3_824D6A88 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    mask = __VMXGetReg(67);
    zero = __VMXGetReg(77);
    return __vsel(v, zero, mask);
}

static __forceinline __vector4 Transform3(__vector4 v, Matrix_824D6A88 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

__vector4 *fn_824D6A88(__vector4 *out, Owner_824D6A88 *owner, int mode, int side, int world)
{
    void *skeleton = owner->skeleton;
    __vector4 offset;
    __vector4 p, zero, mask;
    float x;
    int joint;
    Matrix_824D6A88 a, b;
    Matrix_824D6A88 *m;

    if (skeleton == 0) {
        *out = __VMXGetReg(77);
        return out;
    }

    offset = __VMXGetReg(77);
    joint = 0;
    switch (mode) {
    case 1:
        joint = 4;
        offset = LoadOffset(&lbl_831D40A8.offset1);
        break;
    case 2:
        joint = side != 0 ? 13 : 12;
        offset = LoadOffset(&lbl_831D40A8.offset2);
        break;
    case 3:
        joint = side != 0 ? 19 : 18;
        offset = LoadOffset(&lbl_831D40A8.offset3);
        break;
    }

    x = -offset.vector4_f32[0];
    if (side == 0)
        offset = __vsel(offset, __vspltw(__lvlx(&x, 0), 0), lbl_8329EA30);

    if (world != 0)
        m = fn_822B6AE0(&a, skeleton, joint);
    else
        m = fn_822B6BB8(&b, skeleton, joint);

    p = Transform3(offset, *m);
    mask = __VMXGetReg(67);
    zero = __VMXGetReg(77);
    *out = __vsel(p, zero, mask);
    return out;
}
