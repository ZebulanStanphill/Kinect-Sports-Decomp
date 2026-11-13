// getVtablehkpConvexPieceStreamData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConvexPieceStreamData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpConvexPieceStreamData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConvexPieceStreamData : public hkReferencedObject {
public:
    hkpConvexPieceStreamData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpConvexPieceStreamData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpConvexPieceStreamData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConvexPieceStreamData(f);
    return u.ptr;
}
