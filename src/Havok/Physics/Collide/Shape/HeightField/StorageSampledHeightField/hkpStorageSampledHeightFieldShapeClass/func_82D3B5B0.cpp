// getVtablehkpStorageSampledHeightFieldShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpStorageSampledHeightFieldShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpStorageSampledHeightFieldShape -> hkpSampledHeightFieldShape -> hkpHeightFieldShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpStorageSampledHeightFieldShape.h"

const void *HK_CALL getVtablehkpStorageSampledHeightFieldShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpStorageSampledHeightFieldShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpStorageSampledHeightFieldShape(f);
    return u.ptr;
}
