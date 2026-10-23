// hkpSphereShape::hkpSphereShape(hkReal radius) (Physics/Collide/Shape/Convex/Sphere/hkpSphereShape.cpp).
#include "havok/hkpShape.h"

class hkpSphereShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpSphereShape(hkReal radius);
};

hkpSphereShape::hkpSphereShape(hkReal radius) : hkpConvexShape(HK_SHAPE_SPHERE, radius)
{
}
