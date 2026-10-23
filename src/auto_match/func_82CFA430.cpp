// hkDefaultError::~hkDefaultError, the implicit destructor (Common/Base/System/Error/hkDefaultError.h): the array, then the pointer map. Emitted out of line because the deleting destructor (fn_82CFA4C0) calls it; the function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static T *s_instance;
};

class hkError : public hkReferencedObject, public hkSingleton<hkError> {
public:
    hkError() {}
};

class hkDefaultError : public hkError {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultError() {}

    hkPointerMap<int, int> m_disabledAssertIds;   // +0x8
    hkArray<int> m_sectionIds;                    // +0x14
};

void emitVtable_82CFA430(void *p) { new (p) hkDefaultError; }
