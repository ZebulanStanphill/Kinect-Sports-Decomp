// hkStringPtr (Common/Base/Container/StringPtr/hkStringPtr.h): a C string
// pointer whose low bit marks an owned (heap-allocated) copy. 4 bytes.
// The destructor is out of line, fn_82CED5B8 (frees the copy through
// hkMemoryRouter::easyFree, fn_82CE5338), and so is the finish constructor,
// fn_82CED308 (an empty function: finish functions call it with the flag).
// Both keep their fn_ names because Matching C units call them, and are
// reached through inline wrappers.
#ifndef HAVOK_HKSTRINGPTR_H
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBaseTypes.h"

class hkStringPtr;
extern "C" {
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
}

class hkStringPtr {
public:
    enum { OWNED_FLAG = 0x1 };
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }
    HK_FORCE_INLINE const char *cString() const
    { return reinterpret_cast<const char *>(hkUlong(m_stringAndFlag) & ~hkUlong(OWNED_FLAG)); }

    const char *m_stringAndFlag;
};

#endif
