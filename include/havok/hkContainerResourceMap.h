// hkContainerResourceMap (Common/Serialize/Resource/hkResourceMap.h), 0x10 bytes: an hkResourceMap over the
// resources of a container, kept in a string map from names to handles.
// The constructor is out of line (??0hkContainerResourceMap@@QAA@PAX@Z, 82E15D28: collects the container's
// resources and inserts each under its name); its symbol gives the container as void * (Havok's takes an
// hkResourceContainer *). The destructor is implicit (82E15E68 destroys the map, then ~hkResourceMap).
// getObjectByName is the first slot of ??_7hkContainerResourceMap@@6B@ and keeps its fn_ name (fn_82E14778). The
// member name is invented.
#ifndef HAVOK_HKCONTAINERRESOURCEMAP_H
#define HAVOK_HKCONTAINERRESOURCEMAP_H

#include "havok/hkResourceMap.h"
#include "havok/hkMap.h"

class hkResourceHandle;

class hkContainerResourceMap : public hkResourceMap {
public:
    hkContainerResourceMap(void *container);
    virtual void *getObjectByName(const char *objectName, const hkClass **klassOut = HK_NULL) const;

    hkStringMap<hkResourceHandle *> m_resources;   // +0x4
};

#endif
