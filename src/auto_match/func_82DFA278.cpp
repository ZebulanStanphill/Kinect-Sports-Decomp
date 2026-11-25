// hkpTyremarksInfo::getWheelTyremarksStrips (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.cpp): copies the
// left and right points of one wheel's tyremark ring buffer, oldest first.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"

struct hkpTyremarkPoint {
    hkVector4 m_pointLeft;  // +0x0
    hkVector4 m_pointRight; // +0x10
};

class hkpVehicleInstance;

class hkpTyremarksWheel : public hkReferencedObject
{
  public:
    virtual ~hkpTyremarksWheel();

    // fn_82DFA230, inlined here
    HK_FORCE_INLINE const hkpTyremarkPoint &getTyremarkPoint(int i) const
    {
        return m_tyremarkPoints[(m_currentPosition + i) % m_numPoints];
    }

    int m_currentPosition;                      // +0x8
    int m_numPoints;                            // +0xc
    hkArray<hkpTyremarkPoint> m_tyremarkPoints; // +0x10
};

class hkpTyremarksInfo : public hkReferencedObject
{
  public:
    virtual ~hkpTyremarksInfo();
    virtual void updateTyremarksInfo(hkReal timestep, const hkpVehicleInstance *vehicle);
    virtual void getWheelTyremarksStrips(const hkpVehicleInstance *vehicle, int wheel,
                                         hkVector4 *strips_out) const;

    hkReal m_minTyremarkEnergy;                    // +0x8
    hkReal m_maxTyremarkEnergy;                    // +0xc
    hkArray<hkpTyremarksWheel *> m_tyremarksWheel; // +0x10
};

void hkpTyremarksInfo::getWheelTyremarksStrips(const hkpVehicleInstance *vehicle, int wheel,
                                               hkVector4 *strips_out) const
{
    const hkpTyremarksWheel &tyremarksWheel = *m_tyremarksWheel[wheel];
    const int numPoints = tyremarksWheel.m_numPoints;
    for (int i = 0; i < numPoints; i++) {
        const hkpTyremarkPoint &point = tyremarksWheel.getTyremarkPoint(i);
        strips_out[i * 2] = point.m_pointLeft;
        strips_out[i * 2 + 1] = point.m_pointRight;
    }
}
