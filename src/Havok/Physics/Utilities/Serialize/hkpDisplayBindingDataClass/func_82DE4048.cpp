// getVtablehkpDisplayBindingData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDisplayBindingData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpDisplayBindingData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpDisplayBindingData : public hkReferencedObject {
public:
    hkpDisplayBindingData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpDisplayBindingData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDisplayBindingData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDisplayBindingData(f);
    return u.ptr;
}
