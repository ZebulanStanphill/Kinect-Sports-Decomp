// hkpTyremarksWheel's scalar deleting destructor (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h): it calls the
// user-written destructor (??1, fn_82DF9270, defined elsewhere) and frees through the class allocator. The
// finish constructor below only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

struct hkpTyremarkPoint {
    hkVector4 m_pointLeft;
    hkVector4 m_pointRight;
};

class hkpTyremarksWheel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpTyremarksWheel(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_tyremarkPoints(f) {}
    virtual ~hkpTyremarksWheel();

    int m_currentPosition;                        // +0x8
    int m_numPoints;                              // +0xC
    hkArray<hkpTyremarkPoint> m_tyremarkPoints;   // +0x10
};

void emitVtable_82DF92F0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpTyremarksWheel(f); }
