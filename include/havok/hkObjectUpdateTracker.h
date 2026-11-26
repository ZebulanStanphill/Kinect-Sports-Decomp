// hkObjectUpdateTracker (Common/Serialize/Util/hkObjectUpdateTracker.h), 8 bytes: the interface through which
// a loader records allocations, pointers to patch and objects to finish. It has no vtable of its own in the
// game (abstract, constructed inline); its six slots after hkReferencedObject's are placed by
// ??_7hkPackfileObjectUpdateTracker@@6B@ (8214B464), whose functions agree with the names, which are
// Havok's: addAllocation (82E16EA0) and addChunk (82E16EE8) forward to the packfile data, objectPointedBy
// (82E16F68) and replaceObject (82E17058) use the pointer multimap, addFinish (82E16EA8) inserts into and
// removeFinish (82E16E38) removes from the finish map.
#ifndef HAVOK_HKOBJECTUPDATETRACKER_H
#define HAVOK_HKOBJECTUPDATETRACKER_H

#include "havok/hkBase.h"

class hkObjectUpdateTracker : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkObjectUpdateTracker() {}

    virtual void addAllocation(void *p);                                                  // +0xC
    virtual void addChunk(void *p, int n, HK_MEMORY_CLASS c);                             // +0x10
    virtual void objectPointedBy(void *newObject, void *fromWhere);                       // +0x14
    virtual void replaceObject(void *oldObject, void *newObject, const hkClass *newClass);   // +0x18
    virtual void addFinish(void *newObject, const char *className);                       // +0x1C
    virtual void removeFinish(void *oldObject);                                           // +0x20
};

#endif
