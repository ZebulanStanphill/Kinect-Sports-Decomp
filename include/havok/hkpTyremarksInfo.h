// hkpTyremarkPoint, hkpTyremarksWheel and hkpTyremarksInfo (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h, where
// Havok declares the three together): the tyre marks a vehicle leaves, one ring buffer of points per wheel.
#ifndef HAVOK_HKPTYREMARKSINFO_H
#define HAVOK_HKPTYREMARKSINFO_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpVehicleInstance;
class hkpVehicleData;

// 0x20 bytes: the left and right edges of the mark at one point (getWheelTyremarksStrips, 82DFA278, copies
// them in that order). Havok does not declare it a POD type, so hkArray::clear runs its (empty) destruct loop
// over the points: hkpTyremarksWheel's constructor (82DFA760, and inlined in 82DFA7A0) keeps the dead
// `addi r11, r3, 0x10` of that loop. The empty destructor stands for that here (hkArrayUtil::destruct tests
// __has_trivial_destructor).
struct hkpTyremarkPoint {
    ~hkpTyremarkPoint() {}

    hkVector4 m_pointLeft;    // +0x0
    hkVector4 m_pointRight;   // +0x10
};

// 0x1C bytes. Its vtable (??_7hkpTyremarksWheel@@6B@, 3 slots): the deleting destructor (82DF92F0),
// hkReferencedObject's two. The constructor and the destructor are out of line in hkpTyremarksInfo.cpp
// (??0hkpTyremarksWheel@@QAA@XZ, 82DFA760; ??1hkpTyremarksWheel@@UAA@XZ, 82DF9270, an empty user-written one);
// hkpTyremarksInfo's constructor (82DFA7A0) inlines the constructor. setNumPoints keeps its fn_ name.
class hkpTyremarksWheel;
extern "C" void fn_82DFA668(hkpTyremarksWheel *self, int numPoints);   // hkpTyremarksWheel::setNumPoints

class hkpTyremarksWheel : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpTyremarksWheel();
    hkpTyremarksWheel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_tyremarkPoints(flag) {}
    virtual ~hkpTyremarksWheel();
    void setNumPoints(int numPoints) { fn_82DFA668(this, numPoints); }
    // Inlined in getWheelTyremarksStrips (82DFA278); fn_82DFA230 is the out-of-line copy.
    HK_FORCE_INLINE const hkpTyremarkPoint &getTyremarkPoint(int i) const
    {
        return m_tyremarkPoints[(m_currentPosition + i) % m_numPoints];
    }

    int m_currentPosition;                        // +0x8
    int m_numPoints;                              // +0xC
    hkArray<hkpTyremarkPoint> m_tyremarkPoints;   // +0x10
};

// 0x1C bytes. Its vtable (??_7hkpTyremarksInfo@@6B@, 5 slots): the deleting destructor (82DF9358),
// getClassType (hkReferencedObject's), calcContentStatistics (82DFA2F8), updateTyremarksInfo (82DFA450) and
// getWheelTyremarksStrips (82DFA278). The constructor and the destructor are out of line
// (??0hkpTyremarksInfo@@QAA@ABUhkpVehicleData@@H@Z, 82DFA7A0; ??1hkpTyremarksInfo@@UAA@XZ, 82DFA8D0). The name
// updateTyremarksInfo follows Havok's header. The constructor's mangled name takes hkpVehicleData as a struct,
// although it is a class (see hkpVehicleData.h); the unit that defines it declares a struct of its own.
class hkpTyremarksInfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpTyremarksInfo(const hkpVehicleData &data, int numPoints);
    hkpTyremarksInfo(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_tyremarksWheel(flag) {}
    virtual ~hkpTyremarksInfo();
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;     // +0x8
    virtual void updateTyremarksInfo(hkReal timestep, const hkpVehicleInstance *vehicle);              // +0xC
    virtual void getWheelTyremarksStrips(const hkpVehicleInstance *vehicle, int wheel,
                                         hkVector4 *strips_out) const;                                  // +0x10

    hkReal m_minTyremarkEnergy;                      // +0x8
    hkReal m_maxTyremarkEnergy;                      // +0xC
    hkArray<hkpTyremarksWheel *> m_tyremarksWheel;   // +0x10
};

#endif
