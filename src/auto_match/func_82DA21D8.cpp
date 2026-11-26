#include "havok/hkMatrix3.h"

struct Atoms_82DA21D8 {
    char pad0[0x20];
    hkMatrix3 m_rotationA;    // 0x20
    hkMatrix3 m_rotationB;    // 0x50
};

extern "C" void fn_82DA21D8(Atoms_82DA21D8 *self, const hkMatrix3 &bodyA, const hkMatrix3 &bodyB,
                            const hkVector4 &axis, const hkVector4 &perp)
{
    hkMatrix3 m;
    m.m_col0 = axis;
    m.m_col0.normalize3();
    m.m_col1 = perp;
    m.m_col1.normalize3();
    m.m_col2.setCross(m.m_col0, m.m_col1);
    self->m_rotationA.setTransposeMul(bodyA, m);
    self->m_rotationB.setTransposeMul(bodyB, m);
}
