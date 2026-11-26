// hkpTyremarksInfo::~hkpTyremarksInfo (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.cpp).
#include "havok/hkBase.h"
#include "havok/hkpTyremarkPoint.h"

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

hkpTyremarksInfo::~hkpTyremarksInfo()
{
    for (int i = 0; i < m_tyremarksWheel.getSize(); i++)
        fn_82CE4118(m_tyremarksWheel[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
