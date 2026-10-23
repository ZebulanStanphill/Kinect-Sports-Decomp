// getVtablehkpCharacterMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCharacterMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpCharacterMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpMotion : public hkReferencedObject {
public:
    hkpMotion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpCharacterMotion : public hkpMotion {
public:
    hkpCharacterMotion(hkFinishLoadedObjectFlag flag) : hkpMotion(flag) {}
};

const void *HK_CALL getVtablehkpCharacterMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpCharacterMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpCharacterMotion(f);
    return u.ptr;
}
