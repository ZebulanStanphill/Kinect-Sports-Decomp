typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);
}

struct Matrix_822CC1D8 {
    __vector4 r[4];
};

struct Camera_822CC1D8 {
    Matrix_822CC1D8 projection;     /* 0x00 */
    Matrix_822CC1D8 view;           /* 0x40 */
    char pad80[0x20];
    int valid;                      /* 0xa0 */
    char pada4[0x0c];
};

struct Point_822CC1D8 {
    float x;
    float y;
};

extern "C" Camera_822CC1D8 lbl_83296BE0[];
extern "C" Matrix_822CC1D8 lbl_83296890[];
extern "C" float lbl_821CA45C[];

static __forceinline Matrix_822CC1D8 Multiply(const Matrix_822CC1D8 &a, const Matrix_822CC1D8 &b)
{
    Matrix_822CC1D8 m;
    __vector4 t0, t1, t2, t3, c0, c1, c2, c3;
    __vector4 x, y, z, w;

    t0 = __vmrghw(b.r[0], b.r[2]);
    t1 = __vmrghw(b.r[1], b.r[3]);
    t2 = __vmrglw(b.r[0], b.r[2]);
    t3 = __vmrglw(b.r[1], b.r[3]);
    c0 = __vmrghw(t0, t1);
    c1 = __vmrglw(t0, t1);
    c2 = __vmrghw(t2, t3);
    c3 = __vmrglw(t2, t3);
    x = __vmsum4fp(a.r[0], c0);
    y = __vmsum4fp(a.r[0], c1);
    z = __vmsum4fp(a.r[0], c2);
    w = __vmsum4fp(a.r[0], c3);
    m.r[0] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a.r[1], c0);
    y = __vmsum4fp(a.r[1], c1);
    z = __vmsum4fp(a.r[1], c2);
    w = __vmsum4fp(a.r[1], c3);
    m.r[1] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a.r[2], c0);
    y = __vmsum4fp(a.r[2], c1);
    z = __vmsum4fp(a.r[2], c2);
    w = __vmsum4fp(a.r[2], c3);
    m.r[2] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a.r[3], c0);
    y = __vmsum4fp(a.r[3], c1);
    z = __vmsum4fp(a.r[3], c2);
    w = __vmsum4fp(a.r[3], c3);
    m.r[3] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    return m;
}

static __forceinline __vector4 Transform(__vector4 v, const Matrix_822CC1D8 &m)
{
    __vector4 r;

    r = __vmaddfp(m.r[2], __vspltw(v, 2), m.r[3]);
    r = __vmaddfp(__vspltw(v, 1), m.r[1], r);
    r = __vmaddfp(__vspltw(v, 0), m.r[0], r);
    return r;
}

static __forceinline Matrix_822CC1D8 DefaultView() { return lbl_83296890[0]; }
static __forceinline Matrix_822CC1D8 DefaultProjection() { return lbl_83296890[1]; }
static __forceinline const Matrix_822CC1D8 &LookupView(int index)
{
    if (lbl_83296BE0[index].valid != 0)
        return lbl_83296BE0[index].view;
    return lbl_83296890[0];
}
static __forceinline const Matrix_822CC1D8 &LookupProjection(int index)
{
    return lbl_83296BE0[index].valid != 0 ? lbl_83296BE0[index].projection : lbl_83296890[1];
}
extern "C" void fn_822CC1D8(Point_822CC1D8 *out, int index, __vector4 point)
{
    Matrix_822CC1D8 view = index == 0 ? DefaultView() : LookupView(index);
    const Matrix_822CC1D8 &proj = index == 0 ? DefaultProjection() : LookupProjection(index);
    Matrix_822CC1D8 m = Multiply(proj, view);
    union {
        __vector4 v;
        Point_822CC1D8 p;
        float f[4];
    } r;

    r.v = Transform(point, m);
    r.p.x = r.p.x * (lbl_821CA45C[1] / r.f[3]);
    r.p.y = r.p.y * (lbl_821CA45C[1] / r.f[3]);
    *out = r.p;
}
