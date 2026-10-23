// hkResourceMap's scalar deleting destructor (vtable slot 1): the user-written destructor stores the vtable, then the global operator delete. The function at the end only makes the compiler emit the vtable.
// hkResourceMap (Common/Serialize/Resource/hkResourceMap.h): a root interface
// (RTTI: no bases) whose destructor is user-written and in vtable slot 1;
// deleting one uses the global operator delete (fn_8265CA20).
// hkContainerResourceMap: a string map from names to resources at +0x4.
#include "havok/hkBase.h"

class hkResourceMap {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void *getObjectByName(const char *objectName, const hkClass **klassOut = HK_NULL) const;   // +0x0 (pure)
    virtual ~hkResourceMap() {}                                                                    // +0x4
};

class hkContainerResourceMap : public hkResourceMap {
public:
    // The real constructor takes the resource container (fn_82E15D28, out of
    // line); this inline one only lets a unit emit the vtable.
    hkContainerResourceMap() {}
    virtual void *getObjectByName(const char *objectName, const hkClass **klassOut = HK_NULL) const;

    hkStringMap<void *> m_resources;   // +0x4
};

void emitVtable_82E146D8(hkResourceMap *p) { p->hkResourceMap::~hkResourceMap(); }
