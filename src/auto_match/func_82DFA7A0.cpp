// hkpTyremarksInfo::hkpTyremarksInfo(const hkpVehicleData &, int num_points) (Havok 2010,
// Physics/Vehicle/TyreMarks/hkpTyremarksInfo.cpp): one tyremarks wheel per wheel of the vehicle, each with
// num_points points. The original TU defines hkpTyremarksWheel's constructor too and inlines it here.
#include "havok/hkpTyremarksInfo.h"

// The constructor's mangled name takes hkpVehicleData as a struct (??0hkpTyremarksInfo@@QAA@ABUhkpVehicleData@@H@Z);
// the class in hkpVehicleData.h gives `V`, so this unit defines the one member it reads as a struct.
// MSVC mangles with the key of the definition (warning C4099 against the header's forward declaration).
struct hkpVehicleData {
    char pad[0x20];
    hkInt8 m_numWheels;   // +0x20
};

HK_FORCE_INLINE hkpTyremarksWheel::hkpTyremarksWheel()
{
    m_numPoints = 0;
    m_currentPosition = 0;
    m_tyremarkPoints.clear();
}

hkpTyremarksInfo::hkpTyremarksInfo(const hkpVehicleData &data, int num_points)
{
    m_minTyremarkEnergy = 0;
    m_maxTyremarkEnergy = 0;
    m_tyremarksWheel.setSize(data.m_numWheels);
    for (int sd_it = 0; sd_it < m_tyremarksWheel.getSize(); sd_it++) {
        hkpTyremarksWheel *tyremarks_wheel = new hkpTyremarksWheel();
        tyremarks_wheel->setNumPoints(num_points);
        m_tyremarksWheel[sd_it] = tyremarks_wheel;
    }
}
