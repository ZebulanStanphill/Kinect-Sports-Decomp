// getVtablehkxCamera, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxCamera (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxCamera -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxCamera : public hkReferencedObject {
public:
    hkxCamera(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxCamera()
{
    union {
        void *ptr;
        char buf[sizeof(hkxCamera)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxCamera(f);
    return u.ptr;
}
