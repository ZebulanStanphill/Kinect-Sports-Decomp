// Takes a record from the pool (fn_8251E4D0) and fills it: the given type, the length of
// the vector, the given count, the origin and the vector. Returns 1, or 0 when the pool gave
// nothing. The vector maths is Havok's (hkVector4::length3 with two refinement steps against
// Havok's global 0.5 vector).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltisw(int);
void __stvewx(__vector4, void *, int);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float length3() const
    {
        const hkQuadReal zero = __vspltisw(0);
        const hkQuadReal len2 = __vmsum3fp(m_quad, m_quad);
        hkQuadReal e = __vrsqrtefp(len2);
        const hkQuadReal halfLen2 = __vmulfp(len2, lbl_82132D70);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
        e = __vsel(e, zero, __vcmpeqfp(zero, len2));
        float r;
        __stvewx(__vmulfp(len2, e), &r, 0);
        return r;
    }
    hkQuadReal m_quad;
};

struct Pool_82605F88;

struct Record_82605F88 {
    int type;               // 0x00
    float length;           // 0x04
    int count;              // 0x08
    int padC;
    hkVector4 origin;       // 0x10
    hkVector4 vector;       // 0x20
};

extern "C" void *fn_8251E4D0(Pool_82605F88 *pool);

extern "C" int fn_82605F88(Pool_82605F88 *pool, int type, const hkVector4 &origin, const hkVector4 &vector,
                           int count)
{
    Record_82605F88 *record = (Record_82605F88 *)fn_8251E4D0(pool);

    if (record != 0) {
        record->type = type;
        record->length = vector.length3();
        record->count = count;
        record->origin = origin;
        record->vector = vector;
        return 1;
    }
    return 0;
}
