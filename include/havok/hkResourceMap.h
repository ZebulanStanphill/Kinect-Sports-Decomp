// hkResourceMap (Common/Serialize/Resource/hkResourceMap.h), 4 bytes: a root interface (RTTI: no bases) that
// finds a loaded object by name. ??_7hkResourceMap@@6B@ (8214B298) has the pure getObjectByName first and the
// scalar deleting destructor (??_GhkResourceMap@@UAAPAXI@Z, 82E146D8) second; the destructor is user-written
// and empty (it stores the vtable), and deleting one uses the global operator delete (fn_8265CA20).
#ifndef HAVOK_HKRESOURCEMAP_H
#define HAVOK_HKRESOURCEMAP_H

#include "havok/hkBase.h"

class hkResourceMap {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void *getObjectByName(const char *objectName, const hkClass **klassOut = HK_NULL) const = 0;   // +0x0
    virtual ~hkResourceMap() {}                                                                        // +0x4
};

#endif
