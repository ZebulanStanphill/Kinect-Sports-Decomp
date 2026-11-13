// finishLoadedObjecthkpConvexPieceStreamData: the finish function in hkpConvexPieceStreamData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpConvexPieceStreamData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConvexPieceStreamData : public hkReferencedObject {
public:
    hkpConvexPieceStreamData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkpConvexPieceStreamData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexPieceStreamData(f);
}
