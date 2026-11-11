// hkpSpringAction::setPositionsInBodySpace shape: stores both local pivots, moves them to
// world space (fn_82CE5040 = hkVector4::setTransformedPos) and sets the rest length to the
// distance between them.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
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

class hkTransform;
class hkVector4;
extern "C" void fn_82CE5040(hkVector4 *self, const hkTransform *t, const hkVector4 *v);

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    __forceinline void setTransformedPos(const hkTransform &t, const hkVector4 &v) { fn_82CE5040(this, &t, &v); }
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

struct Entity_82DF5368 {
    char pad[0xf0];
    char transform[0x40];
    __forceinline const hkTransform &getTransform() const { return *(const hkTransform *)transform; }
};

struct SpringAction_82DF5368 {
    char pad0[0x18];
    Entity_82DF5368 *entityA;      // 0x18
    Entity_82DF5368 *entityB;      // 0x1c
    char pad20[0x10];
    hkVector4 positionAinA;        // 0x30
    hkVector4 positionBinB;        // 0x40
    float restLength;              // 0x50
};

extern "C" void fn_82DF5368(SpringAction_82DF5368 *self, const hkVector4 &pivotA, const hkVector4 &pivotB)
{
    Entity_82DF5368 *a = self->entityA;
    Entity_82DF5368 *b = self->entityB;

    self->positionAinA = pivotA;
    self->positionBinB = pivotB;

    hkVector4 worldA;
    hkVector4 worldB;
    worldA.setTransformedPos(a->getTransform(), pivotA);
    worldB.setTransformedPos(b->getTransform(), pivotB);

    hkVector4 d;
    d.setSub4(worldA, worldB);
    self->restLength = d.length3();
}
