// getVtablehkpSerializedDisplayRbTransforms, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSerializedDisplayRbTransforms (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSerializedDisplayRbTransforms -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpSerializedDisplayRbTransforms : public hkReferencedObject {
public:
    hkpSerializedDisplayRbTransforms(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpSerializedDisplayRbTransforms()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSerializedDisplayRbTransforms)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSerializedDisplayRbTransforms(f);
    return u.ptr;
}
