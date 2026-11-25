#ifndef HAVOK_HKRESOURCEHANDLE_H
#define HAVOK_HKRESOURCEHANDLE_H

#include "havok/hkBase.h"

// Resources (Common/Serialize/Resource): hkResourceBase, hkResourceHandle and
// hkResourceContainer are interfaces without data (RTTI and hkClass sizes:
// 8 bytes each).
class hkResourceBase : public hkReferencedObject {
public:
    hkResourceBase() {}
    hkResourceBase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};

class hkResourceHandle : public hkResourceBase {
public:
    hkResourceHandle() {}
    hkResourceHandle(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
};

class hkResourceContainer : public hkResourceBase {
public:
    hkResourceContainer() {}
    hkResourceContainer(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
};

#endif
