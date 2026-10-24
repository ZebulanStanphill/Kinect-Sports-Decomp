// hkpDefaultWorldMaintenanceMgr::hkpDefaultWorldMaintenanceMgr() (Physics/Dynamics/World/Maintenance/Default/hkpDefaultWorldMaintenanceMgr.cpp). The time limits are float literals (33.0f, 63.0f); the game's copies are lbl_82022FC8/lbl_820288C0, so this matches only with those named __real@42040000/__real@427c0000.
#include "havok/hkBase.h"

class hkpWorldMaintenanceMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
};

class hkpDefaultWorldMaintenanceMgr : public hkpWorldMaintenanceMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultWorldMaintenanceMgr();

    hkReal m_minAllowedTimeValue;   // +0x8
    hkReal m_maxAllowedTimeValue;   // +0xC
};

hkpDefaultWorldMaintenanceMgr::hkpDefaultWorldMaintenanceMgr()
{
    m_minAllowedTimeValue = 32.0f + 1.0f;
    m_maxAllowedTimeValue = 64.0f - 1.0f;
}
