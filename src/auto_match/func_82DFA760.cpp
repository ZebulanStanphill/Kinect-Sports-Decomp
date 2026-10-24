// hkpTyremarksWheel::hkpTyremarksWheel() (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.cpp).
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

struct hkpTyremarkPoint { ~hkpTyremarkPoint() {}
    hkVector4 m_pointLeft;
    hkVector4 m_pointRight;
};

// Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h.
class hkpTyremarksWheel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpTyremarksWheel();
    virtual ~hkpTyremarksWheel();

    int m_currentPosition;                        // +0x8
    int m_numPoints;                              // +0xC
    hkArray<hkpTyremarkPoint> m_tyremarkPoints;   // +0x10
};

class hkpVehicleData;

class hkpTyremarksInfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpTyremarksInfo(const hkpVehicleData &data, int numPoints);
    virtual ~hkpTyremarksInfo();

    hkReal m_minTyremarkEnergy;                     // +0x8
    hkReal m_maxTyremarkEnergy;                     // +0xC
    hkArray<hkpTyremarksWheel *> m_tyremarksWheel;  // +0x10
};

hkpTyremarksWheel::hkpTyremarksWheel()
{
    m_numPoints = 0;
    m_currentPosition = 0;
    m_tyremarkPoints.clear();
}
