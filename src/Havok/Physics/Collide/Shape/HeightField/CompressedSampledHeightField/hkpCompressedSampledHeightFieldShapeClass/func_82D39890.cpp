// getVtablehkpCompressedSampledHeightFieldShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCompressedSampledHeightFieldShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpCompressedSampledHeightFieldShape -> hkpSampledHeightFieldShape -> hkpHeightFieldShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShape : public hkReferencedObject {
public:
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag) {}
};

class hkpCompressedSampledHeightFieldShape : public hkpSampledHeightFieldShape {
public:
    hkpCompressedSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpSampledHeightFieldShape(flag) {}
};

const void *HK_CALL getVtablehkpCompressedSampledHeightFieldShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpCompressedSampledHeightFieldShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpCompressedSampledHeightFieldShape(f);
    return u.ptr;
}
