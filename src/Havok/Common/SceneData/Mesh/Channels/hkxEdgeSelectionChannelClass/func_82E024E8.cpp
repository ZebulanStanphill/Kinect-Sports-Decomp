// finishLoadedObjecthkxEdgeSelectionChannel: the finish function in hkxEdgeSelectionChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxEdgeSelectionChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxEdgeSelectionChannel.h"

void HK_CALL finishLoadedObjecthkxEdgeSelectionChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxEdgeSelectionChannel(f);
}
