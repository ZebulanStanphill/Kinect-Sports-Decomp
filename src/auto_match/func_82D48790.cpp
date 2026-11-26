#include "havok/hkAabb.h"
#include "havok/hkpShape.h"

struct Shape_82D48790 {
    char pad00[0x10];
    float m_radius;                    // 0x10
    char pad14[0xc];
    hkVector4 m_halfExtents;           // 0x20
    hkVector4 m_center;                // 0x30
    unsigned char m_useBox;            // 0x40
    char pad41[3];
    const hkpShape **m_children;       // 0x44
    int m_numChildren;                 // 0x48
};

extern "C" void fn_82D401F8(const hkTransform &localToWorld, const hkVector4 &halfExtents,
                            const hkVector4 &center, float tolerance, hkAabb &out);

extern "C" void fn_82D48790(Shape_82D48790 *self, const hkTransform &localToWorld, float tolerance, hkAabb &out)
{
    if (self->m_useBox) {
        fn_82D401F8(localToWorld, self->m_halfExtents, self->m_center, self->m_radius + tolerance, out);
        return;
    }
    self->m_children[0]->getAabb(localToWorld, tolerance, out);
    for (int i = 1; i < self->m_numChildren; i++) {
        hkAabb childAabb;
        self->m_children[i]->getAabb(localToWorld, tolerance, childAabb);
        out.m_min.setMin4(out.m_min, childAabb.m_min);
        out.m_max.setMax4(out.m_max, childAabb.m_max);
    }
}
