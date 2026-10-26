// cleanupLoadedObjecthkpConvexPieceStreamData: the cleanup function in hkpConvexPieceStreamData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConvexPieceStreamData {
public:
    virtual ~hkpConvexPieceStreamData();
};

void HK_CALL cleanupLoadedObjecthkpConvexPieceStreamData(void *p)
{
    static_cast<hkpConvexPieceStreamData *>(p)->~hkpConvexPieceStreamData();
}
