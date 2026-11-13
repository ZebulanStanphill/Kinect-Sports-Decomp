typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

extern const float lbl_82191EA0[];

static __forceinline __vector4 QuaternionMultiply(__vector4 q1, __vector4 q2, __vector4 signMask)
{
    __vector4 q2wzyx, q2zwxy, q2yxwz, negated, nx, ny, nz, nw, x, y, z, w;

    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
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

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline __vector4 Negate(__vector4 v)
{
    __vector4 s = __vspltisw(-1);
    s = __vslw(s, s);
    return __vxor(v, s);
}

static __forceinline __vector4 ReplicateValue(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

static __forceinline float PlaneDotCoord(__vector4 plane, __vector4 v)
{
    return plane.vector4_f32[0] * v.vector4_f32[0] + plane.vector4_f32[1] * v.vector4_f32[1] + plane.vector4_f32[2] * v.vector4_f32[2] + plane.vector4_f32[3];
}

static __forceinline __vector4 PlaneNormal(__vector4 plane)
{
    return VectorSet(plane.vector4_f32[0], plane.vector4_f32[1], plane.vector4_f32[2], 0.0f);
}

/* Rotates the frame's axis by its orientation; if the point lies behind the plane through the frame's
   offset position with that normal, projects the point onto the plane. */
__vector4 fn_822C6130(const __vector4 *frame, __vector4 point)
{
    __vector4 signMask, a, c, r, q, axis, pos, n, d;

    signMask = __vspltisw(-1);
    a = __vspltisw(0);
    signMask = __vslw(signMask, signMask);
    q = frame[1];
    axis = __VMXGetReg(71);
    a = __vrlimi(a, axis, 0xe, 0);
    c = __vrlimi(__vxor(q, signMask), q, 1, 0);
    r = QuaternionMultiply(c, a, signMask);
    r = QuaternionMultiply(r, q, signMask);
    pos = __vmaddfp(r, Replicate(&lbl_82191EA0[0x4a]), frame[0]);
    n = Normalize3(__vsubfp(point, pos));
    d = __vmsum3fp(r, n);
    if (d.vector4_f32[0] < 0.0f) {
        __vector4 plane = __vrlimi(Negate(__vmsum3fp(pos, r)), r, 0xe, 0);
        float dist = PlaneDotCoord(plane, point);
        __vector4 normal = PlaneNormal(plane);
        point = __vsubfp(point, __vmulfp(normal, ReplicateValue(dist)));
    }
    return point;
}
