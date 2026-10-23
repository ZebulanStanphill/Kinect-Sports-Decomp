// finishLoadedObjecthkxEdgeSelectionChannel: the finish function in hkxEdgeSelectionChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxEdgeSelectionChannel -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxEdgeSelectionChannel : public hkReferencedObject {
public:
    hkxEdgeSelectionChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkxEdgeSelectionChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxEdgeSelectionChannel(f);
}
