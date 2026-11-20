// hkTransform::setInverse transposes the rotation and rotates the negated translation.
#include "havok/hkTransform.h"

extern "C" {
hkQuadReal __vxor(hkQuadReal, hkQuadReal);
hkQuadReal __vmulfp(hkQuadReal, hkQuadReal);
hkQuadReal __vmaddfp(hkQuadReal, hkQuadReal, hkQuadReal);
hkQuadReal __vspltw(hkQuadReal, unsigned int);
extern const hkQuadReal lbl_8209AB20; // Sign mask.
}

static HK_FORCE_INLINE void setRotatedDir(hkVector4 &out, const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(r.getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(r.getColumn(1).m_quad, b1, r0);
    out.m_quad = __vmaddfp(r.getColumn(2).m_quad, b2, r1);
}

extern "C" void fn_82CE66E8(hkTransform *self, const hkTransform &t)
{
    self->m_rotation.setTranspose(t.m_rotation);
    hkVector4 tr;
    tr.m_quad = __vxor(t.m_translation.m_quad, lbl_8209AB20);
    setRotatedDir(self->m_translation, self->m_rotation, tr);
}
