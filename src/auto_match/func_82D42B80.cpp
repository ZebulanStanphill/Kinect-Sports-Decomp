// Havok finish constructor of an object with a rotation quaternion (+0x20) and a translation
// (+0x30), probably hkpExtendedMeshShape::ShapesSubpart:
// when finishing, recomputes the flags kept in the translation's w (bit 0: translation is not
// equal to the global vector lbl_8323B1A0 within 0.001, bit 1: rotation angle is not below 0.001).
#include "havok/hkVector4.h"
extern "C" {
extern __vector4 lbl_8323B1A0;              // global vector the translation is compared with (.data, filled at run time)
extern const float lbl_82006848;
}

class hkQuaternion { public:
 hkVector4 vec;
};

extern "C" float fn_82CE5620(const hkQuaternion *self);    // hkQuaternion::getAngle

class Subpart_82D42B80 { public:
 char pad0[0x20];
 hkQuaternion rotation;      // 0x20
 hkVector4 translation;      // 0x30
};

extern "C" Subpart_82D42B80 *fn_82D42B80(Subpart_82D42B80 *self, int finishing)
{
    if (finishing) {
        float eps = lbl_82006848;
        int flags = self->translation.equals3(*(const hkVector4 *)&lbl_8323B1A0, eps) ? 0 : 1;
        int rot = fn_82CE5620(&self->rotation) < eps ? 0 : 2;
        self->translation.setInt24W(rot | flags);
    }
    return self;
}
