// hkpBvShape scalar deleting destructor; it calls the destructor below rather than inlining it.
#include "havok/hkpBvShape.h"

hkpBvShape::~hkpBvShape()
{
    m_boundingVolumeShape->removeReference();
}
