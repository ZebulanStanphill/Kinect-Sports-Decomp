// Rotation matrix composed from three single-axis rotations: (fn_8253BC88(a) * fn_8253BAB8(b)) * fn_8253B8E8(c).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct XMMATRIX {
    __vector4 r[4];
    XMMATRIX() {}
    XMMATRIX &operator=(const XMMATRIX &m) { r[0] = m.r[0]; r[1] = m.r[1]; r[2] = m.r[2]; r[3] = m.r[3]; return *this; }
};

extern "C" __vector4 __vspltw(__vector4 v, unsigned int i);
extern "C" __vector4 __vmulfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

extern "C" XMMATRIX fn_8253BAB8(float angle);
extern "C" XMMATRIX fn_8253BC88(float angle);
extern "C" XMMATRIX fn_8253B8E8(float angle);

static __forceinline XMMATRIX Multiply(const XMMATRIX &m1, const XMMATRIX &m2)
{
    XMMATRIX out;
    __vector4 r0, r1, r2, r3;

    r0 = __vmulfp(__vspltw(m1.r[0], 0), m2.r[0]);
    r1 = __vmulfp(__vspltw(m1.r[1], 0), m2.r[0]);
    r2 = __vmulfp(__vspltw(m1.r[2], 0), m2.r[0]);
    r3 = __vmulfp(__vspltw(m1.r[3], 0), m2.r[0]);
    r0 = __vmaddfp(__vspltw(m1.r[0], 1), m2.r[1], r0);
    r1 = __vmaddfp(__vspltw(m1.r[1], 1), m2.r[1], r1);
    r2 = __vmaddfp(__vspltw(m1.r[2], 1), m2.r[1], r2);
    r3 = __vmaddfp(__vspltw(m1.r[3], 1), m2.r[1], r3);
    r0 = __vmaddfp(__vspltw(m1.r[0], 2), m2.r[2], r0);
    r1 = __vmaddfp(__vspltw(m1.r[1], 2), m2.r[2], r1);
    r2 = __vmaddfp(__vspltw(m1.r[2], 2), m2.r[2], r2);
    r3 = __vmaddfp(__vspltw(m1.r[3], 2), m2.r[2], r3);
    r0 = __vmaddfp(__vspltw(m1.r[0], 3), m2.r[3], r0);
    r1 = __vmaddfp(__vspltw(m1.r[1], 3), m2.r[3], r1);
    r2 = __vmaddfp(__vspltw(m1.r[2], 3), m2.r[3], r2);
    r3 = __vmaddfp(__vspltw(m1.r[3], 3), m2.r[3], r3);
    out.r[0] = r0;
    out.r[1] = r1;
    out.r[2] = r2;
    out.r[3] = r3;
    return out;
}

extern "C" XMMATRIX fn_82F59850(float a, float b, float c)
{
    XMMATRIX m = Multiply(fn_8253BC88(a), fn_8253BAB8(b));
    return Multiply(m, fn_8253B8E8(c));
}
