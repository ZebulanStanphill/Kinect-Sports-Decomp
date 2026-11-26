// hkPackfileObjectUpdateTracker (Common/Serialize/Packfile/hkPackfileObjectUpdateTracker.h), 0x38 bytes: the
// hkObjectUpdateTracker over an hkPackfileData. The members and their order are those the constructor
// (??0hkPackfileObjectUpdateTracker@@QAA@PAVhkPackfileData@@@Z, 82E17250) fills in; m_finish maps an
// object to its class name (addFinish, 82E16EA8). The names follow Havok's header.
// The destructor is out of line under the C name fn_82E16EF0 (it releases the packfile data, then the members
// are destroyed); the scalar deleting destructor fn_82E173B0 (a C unit) calls it. The overrides are C units:
// see hkObjectUpdateTracker.h.
#ifndef HAVOK_HKPACKFILEOBJECTUPDATETRACKER_H
#define HAVOK_HKPACKFILEOBJECTUPDATETRACKER_H

#include "havok/hkObjectUpdateTracker.h"
#include "havok/hkSerializeMultiMap.h"

class hkPackfileData;
class hkPackfileObjectUpdateTracker;

// hkPackfileObjectUpdateTracker::setTopLevelObject: stores the object and adds it to the finish map.
extern "C" void fn_82E16E40(hkPackfileObjectUpdateTracker *self, void *topObject, const char *topClass);

class hkPackfileObjectUpdateTracker : public hkObjectUpdateTracker {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkPackfileObjectUpdateTracker(hkPackfileData *data);
    virtual ~hkPackfileObjectUpdateTracker();

    virtual void addAllocation(void *p);
    virtual void addChunk(void *p, int n, HK_MEMORY_CLASS c);
    virtual void objectPointedBy(void *newObject, void *fromWhere);
    virtual void replaceObject(void *oldObject, void *newObject, const hkClass *newClass);
    virtual void addFinish(void *newObject, const char *className);
    virtual void removeFinish(void *oldObject);

    void setTopLevelObject(void *topObject, const char *topClass) { fn_82E16E40(this, topObject, topClass); }

    hkPackfileData *m_packfileData;                   // +0x8 (a reference is held)
    hkSerializeMultiMap<void *, void *> m_pointers;   // +0xC object -> the places that point to it
    hkPointerMap<void *, const char *> m_finish;      // +0x28 object -> class name
    void *m_topLevelObject;                           // +0x34
};

#endif
