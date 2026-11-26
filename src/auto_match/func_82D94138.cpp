// Moves a phantom by a transform: an AABB phantom has its box translated, a shape phantom's transform is
// multiplied by the given one.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpShapePhantom.h"

extern "C" void fn_82CE68B8(hkTransform *self, const hkTransform *transform);

extern "C" void fn_82D94138(hkpPhantom *phantom, const hkTransform *transform)
{
    switch (phantom->getType()) {
    case HK_PHANTOM_AABB: {
        hkpAabbPhantom *aabbPhantom = static_cast<hkpAabbPhantom *>(phantom);
        hkAabb aabb = aabbPhantom->m_aabb;
        aabb.m_min.add4(transform->m_translation);
        aabb.m_max.add4(transform->m_translation);
        aabbPhantom->setAabb(aabb);
        break;
    }
    case HK_PHANTOM_SIMPLE_SHAPE:
    case HK_PHANTOM_CACHING_SHAPE: {
        hkpShapePhantom *shapePhantom = static_cast<hkpShapePhantom *>(phantom);
        hkTransform t;
        t = shapePhantom->m_motionState.getTransform();
        fn_82CE68B8(&t, transform);
        shapePhantom->setTransform(t);
        break;
    }
    }
}
