// getVtablehkBaseObject, from the reflection definition of hkBaseObject in
// hkBaseObjectClass.cpp (static in Havok): builds an hkBaseObject in a local
// buffer and returns its vtable pointer.
#include "havok/hkBase.h"

inline void *operator new(hk_size_t, void *p) { return p; }

const void *HK_CALL getVtablehkBaseObject()
{
    union {
        void *ptr;
        char buf[sizeof(hkBaseObject)];
    } u;
    new (u.buf) hkBaseObject();
    return u.ptr;
}
