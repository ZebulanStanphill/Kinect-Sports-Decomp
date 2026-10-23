// hkStatisticsCollector::hkStatisticsCollector(const hkVtableClassRegistry *) (hkStatisticsCollector.cpp).
#include "havok/hkBase.h"

class hkVtableClassRegistry;

class hkStatisticsCollector : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStatisticsCollector(const hkVtableClassRegistry *vtableClassRegistry);
    virtual ~hkStatisticsCollector();

    void *m_unknown8;                                   // +0x8, cleared by the destructor
    const hkVtableClassRegistry *m_vtableClassRegistry; // +0xC
    hkBool m_flag;                                      // +0x10
};

hkStatisticsCollector::hkStatisticsCollector(const hkVtableClassRegistry *vtableClassRegistry)
    : m_vtableClassRegistry(vtableClassRegistry), m_flag(false)
{
}
