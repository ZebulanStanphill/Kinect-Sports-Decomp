// hkDefaultError::setEnabled (vtable slot +0x10): enabling removes the id from the disabled set, disabling inserts
// it (value 1) with the heap allocator.
#include "havok/hkBase.h"
#include "havok/hkError.h"

extern "C" {
void fn_82CEAAA0(void *map, int key);                                      // hkMapBase<hkUlong, hkUlong>::remove
void fn_82CEA160(void *map, hkMemoryAllocator *alloc, int key, int val);   // hkMapBase<hkUlong, hkUlong>::insert
}

void hkDefaultError::setEnabled(int id, hkBool enabled)
{
    if (enabled)
        fn_82CEAAA0(&m_disabledAssertIds, id);
    else
        fn_82CEA160(&m_disabledAssertIds, &hkMemoryRouter::getInstance().heap(), id, 1);
}
