// getVtablehkpThinBoxMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpThinBoxMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpThinBoxMotion -> hkpBoxMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpMotion : public hkReferencedObject {
public:
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpBoxMotion : public hkpMotion {
public:
    hkpBoxMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

class hkpThinBoxMotion : public hkpBoxMotion {
public:
    hkpThinBoxMotion(hkFinishLoadedObjectFlag flag) : hkpBoxMotion(flag) {}
};

const void *HK_CALL getVtablehkpThinBoxMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpThinBoxMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpThinBoxMotion(f);
    return u.ptr;
}
