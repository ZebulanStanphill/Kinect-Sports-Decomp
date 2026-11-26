// hkpSimpleShapePhantom::hkpSimpleShapePhantom(hkFinishLoadedObjectFlag), the serialization "finish"
// constructor (Physics/Dynamics/Phantom/hkpSimpleShapePhantom.h). The listener and collision-detail arrays are
// not serialised and are default-constructed.
#include "havok/hkpSimpleShapePhantom.h"

hkpSimpleShapePhantom::hkpSimpleShapePhantom(hkFinishLoadedObjectFlag flag) : hkpShapePhantom(flag) {}
