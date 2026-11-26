// An hkQsTransform set from an hkTransform without scale: the rotation through
// hkQuaternion::set(const hkRotation &), the translation, and the scale from lbl_82132D10.
#include "havok/hkQuaternion.h"

class hkRotation;

typedef struct { hkVector4 a; hkQuaternion sub; hkVector4 b; } Obj_82CF6518;
typedef struct { char pad0[0x30]; hkVector4 v; } Src_82CF6518;

extern "C" void fn_82CF6518(Obj_82CF6518 *self, Src_82CF6518 *src)
{
    self->sub.set(*reinterpret_cast<const hkRotation *>(src));
    self->a = src->v;
    self->b.m_quad = lbl_82132D10;
}
