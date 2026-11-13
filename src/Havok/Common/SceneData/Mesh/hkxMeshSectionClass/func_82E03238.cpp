// getVtablehkxMeshSection, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxMeshSection (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxMeshSection -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxMeshSection : public hkReferencedObject {
public:
    hkxMeshSection(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxMeshSection()
{
    union {
        void *ptr;
        char buf[sizeof(hkxMeshSection)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxMeshSection(f);
    return u.ptr;
}
