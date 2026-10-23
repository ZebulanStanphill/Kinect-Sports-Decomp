// hkStatisticsCollector::~hkStatisticsCollector (Common/Base/Monitor/... hkStatisticsCollector.cpp): clears the pointer at +0x8; the vtable store on entry is dead.
#include "havok/hkBase.h"

class hkVtableClassRegistry;

class hkStatisticsCollector : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStatisticsCollector(const hkVtableClassRegistry *vtableClassRegistry)
        : m_vtableClassRegistry(vtableClassRegistry), m_flag(false) {}
    virtual ~hkStatisticsCollector();

    void *m_unknown8;                                   // +0x8, cleared by the destructor
    const hkVtableClassRegistry *m_vtableClassRegistry; // +0xC
    hkBool m_flag;                                      // +0x10
};

hkStatisticsCollector::~hkStatisticsCollector()
{
    m_unknown8 = HK_NULL;
}
