// hkpCachingShapePhantom::hkpCachingShapePhantom(hkFinishLoadedObjectFlag), the serialization "finish"
// constructor (Physics/Dynamics/Phantom/hkpCachingShapePhantom.h). The listener and collision-detail arrays are
// not serialised and are default-constructed.
#include "havok/hkpCachingShapePhantom.h"

hkpCachingShapePhantom::hkpCachingShapePhantom(hkFinishLoadedObjectFlag flag) : hkpShapePhantom(flag) {}
