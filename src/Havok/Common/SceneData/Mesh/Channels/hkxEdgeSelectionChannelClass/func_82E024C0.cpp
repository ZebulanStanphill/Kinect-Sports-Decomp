// cleanupLoadedObjecthkxEdgeSelectionChannel: the cleanup function in hkxEdgeSelectionChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxEdgeSelectionChannel {
public:
    virtual ~hkxEdgeSelectionChannel();
};

void HK_CALL cleanupLoadedObjecthkxEdgeSelectionChannel(void *p)
{
    static_cast<hkxEdgeSelectionChannel *>(p)->~hkxEdgeSelectionChannel();
}
