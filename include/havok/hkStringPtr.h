// hkStringPtr (Common/Base/Container/StringPtr/hkStringPtr.h): a C string
// pointer whose low bit marks an owned (heap-allocated) copy. 4 bytes.
// The destructor is out of line, fn_82CED5B8 (frees the copy through
// hkMemoryRouter::easyFree, fn_82CE5338), and so are the finish constructor,
// fn_82CED308 (an empty function: finish functions call it with the flag), the
// default constructor, fn_82CED2F8 (it stores a pointer read from a global,
// lbl_8323B430) and the constructor from a C string, fn_82CED488.
// They keep their fn_ names because Matching C units call them, and are
// reached through inline wrappers. The assignment from a C string is out of
// line under its own name (82CED628; hkpGravityGun's constructor, 82DF15B0,
// calls it with &m_name and "GravityGun").
#ifndef HAVOK_HKSTRINGPTR_H
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBaseTypes.h"

class hkStringPtr;
extern "C" {
void fn_82CED2F8(hkStringPtr *self);                              // hkStringPtr::hkStringPtr()
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
void fn_82CED488(hkStringPtr *self, const char *string);          // hkStringPtr::hkStringPtr(const char *)
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
}

class hkStringPtr {
public:
    enum { OWNED_FLAG = 0x1 };
    HK_FORCE_INLINE hkStringPtr() { fn_82CED2F8(this); }
    HK_FORCE_INLINE hkStringPtr(const char *string) { fn_82CED488(this, string); }
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }
    hkStringPtr &operator=(const char *string);
    HK_FORCE_INLINE const char *cString() const
    { return reinterpret_cast<const char *>(hkUlong(m_stringAndFlag) & ~hkUlong(OWNED_FLAG)); }

    const char *m_stringAndFlag;
};

#endif
