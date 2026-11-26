#ifndef HAVOK_HKBINDINGCLASSNAMEREGISTRY_H
#define HAVOK_HKBINDINGCLASSNAMEREGISTRY_H

#include "havok/hkChainedClassNameRegistry.h"
#include "havok/hkStringMapC.h"

// hkBindingClassNameRegistry (Common/Serialize/Util/hkBindingClassNameRegistry.h, 0x4C bytes): a chained registry with
// two string maps between class names (both directions). The list at +0x20
// (16-byte elements) is constructed inline as an empty hkArray; its destructor
// is out of line (fn_82E1BB60). Member names are not known.
extern "C" void fn_82E1BB60(void *self);   // ~list at +0x20

struct hkBindingList {
    struct Entry {
        hkUint32 m_data[4];
    };
    HK_FORCE_INLINE ~hkBindingList() { fn_82E1BB60(this); }
    hkArrayBase<Entry> m_entries;   // no destructor of its own: fn_82E1BB60 frees it
};

class hkBindingClassNameRegistry : public hkChainedClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct ClassNamePair {
        const char *m_first;
        const char *m_second;
    };
    hkBindingClassNameRegistry(const ClassNamePair *pairs, const hkClassNameRegistry *nextRegistry);
    virtual ~hkBindingClassNameRegistry();

    hkBindingList m_list;                              // +0x20
    hkStringMapC<const char *> m_firstToSecond;   // +0x2C
    hkStringMapC<const char *> m_secondToFirst;   // +0x3C
};

#endif
