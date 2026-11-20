#include "havok/hkTransform.h"
// Havok constraint setInWorldSpace shape (fn_82DA21D8 plus pivots): builds the constraint frame
// from the normalised axis, the normalised perpendicular and their cross product, stores it in
// each body's local space (transposed body rotation times the frame), the pivot in each body's
// local space, and a copy of body B's frame.
extern "C" {
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum3fp(__vector4, __vector4);
__vector4 __vrsqrtefp(__vector4);
__vector4 __vnmsubfp(__vector4, __vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
__vector4 __vcmpeqfp(__vector4, __vector4);
__vector4 __vsel(__vector4, __vector4, __vector4);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vpermwi(__vector4, int);
__vector4 __vspltisw(int);
__vector4 __vmrghw(__vector4, __vector4);
extern const hkQuadReal lbl_82132D70;   // Havok's global vector of four 0.5s
extern const hkQuadReal lbl_82132D00;   // Havok's global zero vector
}

class hkMatrix3;
class hkTransform;
class hkVector4;
__forceinline void setRotatedInverseDir(hkVector4 &out, const hkMatrix3 &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    out.m_quad = __vmrghw(xz, y0);
}

static HK_FORCE_INLINE void setTransposeMul(hkMatrix3 &out, const hkMatrix3 &a, const hkMatrix3 &b)
{
    hkMatrix3 aa = a;
    int i = 2;
    do {
        setRotatedInverseDir(out.getColumn(i), aa, b.getColumn(i));
    } while (--i >= 0);
}

struct Atoms_82D97E58 {
    char pad0[0x20];
    hkTransform m_transformA;     // 0x20
    hkTransform m_transformB;     // 0x60
    char padA0[0x10];
    hkMatrix3 m_rotationB;        // 0xb0
};

extern "C" void fn_82D97E58(Atoms_82D97E58 *self, const hkTransform &bodyATransform,
                            const hkTransform &bodyBTransform, const hkVector4 &pivot,
                            const hkVector4 &axis, const hkVector4 &perp)
{
    hkMatrix3 m;
    m.m_col[0] = axis;
    m.m_col[0].normalize3();
    m.m_col[1] = perp;
    m.m_col[1].normalize3();
    m.m_col[2].setCross(m.m_col[0], m.m_col[1]);
    setTransposeMul(self->m_transformA.m_rotation, bodyATransform.getRotation(), m);
    setTransposeMul(self->m_transformB.m_rotation, bodyBTransform.getRotation(), m);
    self->m_transformA.m_translation.setTransformedInversePos(bodyATransform, pivot);
    self->m_transformB.m_translation.setTransformedInversePos(bodyBTransform, pivot);
    self->m_rotationB = self->m_transformB.m_rotation;
}
