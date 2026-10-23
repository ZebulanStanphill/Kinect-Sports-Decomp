// getVtablehkpConvexVerticesConnectivity, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConvexVerticesConnectivity (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpConvexVerticesConnectivity -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConvexVerticesConnectivity : public hkReferencedObject {
public:
    hkpConvexVerticesConnectivity(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpConvexVerticesConnectivity()
{
    union {
        void *ptr;
        char buf[sizeof(hkpConvexVerticesConnectivity)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConvexVerticesConnectivity(f);
    return u.ptr;
}
