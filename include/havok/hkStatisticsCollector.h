// hkStatisticsCollector (Common/Base/System/Io/StatisticsCollector/hkStatisticsCollector.h), 0x14 bytes: the
// interface calcContentStatistics reports memory use to.
// The constructor (82CFF890) stores the class registry and clears the flag at +0x10; the destructor (82CFF8B8)
// clears the pointer at +0x8. The vtable (??_7hkStatisticsCollector@@6B@, 8 slots) has five pure slots after
// hkReferencedObject's; the last two are pushDir and popDir (the agents' calcContentStatistics, 82D53540,
// 82D5D920, 82D741C8, wrap their children in pushDir(name) and popDir()). The first three are not called by any
// unit yet; their names, and the names of the members at +0x8 and +0x10, are not known.
#ifndef HAVOK_HKSTATISTICSCOLLECTOR_H
#define HAVOK_HKSTATISTICSCOLLECTOR_H

#include "havok/hkBase.h"

class hkVtableClassRegistry;

class hkStatisticsCollector : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStatisticsCollector(const hkVtableClassRegistry *vtableClassRegistry);
    virtual ~hkStatisticsCollector();
    virtual void slotC() = 0;                         // +0xC
    virtual void slot10() = 0;                        // +0x10
    virtual void slot14() = 0;                        // +0x14
    virtual void pushDir(const char *dirName) = 0;    // +0x18
    virtual void popDir() = 0;                        // +0x1C

    void *m_unknown8;                                     // +0x8: cleared by the destructor
    const hkVtableClassRegistry *m_vtableClassRegistry;   // +0xC
    hkBool m_flag;                                        // +0x10: false after construction
};

#endif
