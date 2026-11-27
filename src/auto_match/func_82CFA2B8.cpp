// hkDefaultError::sectionEnd (vtable slot +0x20): pops the innermost section id.
#include "havok/hkBase.h"
#include "havok/hkError.h"

// hkArray::popBack(), which hkArray.h does not declare (the /O1 inline expansion keeps the array's address).
static HK_FORCE_INLINE void popBack_82CFA2B8(hkArray<int> &a) { a.m_size--; }

void hkDefaultError::sectionEnd() { popBack_82CFA2B8(m_sectionIds); }
