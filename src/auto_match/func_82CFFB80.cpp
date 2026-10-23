// hkStatisticsCollector scalar deleting destructor, generated from the destructor below. The function at the end only makes the compiler emit the vtable.
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

void emitVtable_82CFFB80(void *p) { new (p) hkStatisticsCollector(HK_NULL); }
