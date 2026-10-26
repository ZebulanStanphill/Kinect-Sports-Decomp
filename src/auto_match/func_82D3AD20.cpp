// cleanupLoadedObjecthkpRemoveTerminalsMoppModifier: the cleanup function in hkpRemoveTerminalsMoppModifier's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpRemoveTerminalsMoppModifier {
public:
    virtual ~hkpRemoveTerminalsMoppModifier();
};

void HK_CALL cleanupLoadedObjecthkpRemoveTerminalsMoppModifier(void *p)
{
    static_cast<hkpRemoveTerminalsMoppModifier *>(p)->~hkpRemoveTerminalsMoppModifier();
}
