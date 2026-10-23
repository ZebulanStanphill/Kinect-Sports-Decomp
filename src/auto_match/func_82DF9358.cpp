// hkpTyremarksInfo's scalar deleting destructor (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h): it calls the
// user-written destructor (??1, fn_82DFA8D0, defined in hkpTyremarksInfo.cpp) and frees through the class
// allocator. The finish constructor below only makes the compiler emit the vtable, and with it the deleting
// destructor.
#include "havok/hkBase.h"

class hkpTyremarksWheel;

class hkpTyremarksInfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpTyremarksInfo(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_tyremarksWheel(f) {}
    virtual ~hkpTyremarksInfo();

    hkReal m_minTyremarkEnergy;                     // +0x8
    hkReal m_maxTyremarkEnergy;                     // +0xC
    hkArray<hkpTyremarksWheel *> m_tyremarksWheel;  // +0x10
};

void emitVtable_82DF9358(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpTyremarksInfo(f); }
