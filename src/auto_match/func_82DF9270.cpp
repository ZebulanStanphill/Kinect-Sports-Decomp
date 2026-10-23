// hkpTyremarksWheel::~hkpTyremarksWheel (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h): an empty user-written
// destructor, so the class vtable is stored first; then m_tyremarkPoints (+0x10, 0x20-byte elements) is destroyed.
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

hkpTyremarksWheel::~hkpTyremarksWheel()
{
}
