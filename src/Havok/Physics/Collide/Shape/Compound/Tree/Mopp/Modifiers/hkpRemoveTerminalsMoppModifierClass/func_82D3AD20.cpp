// cleanupLoadedObjecthkpRemoveTerminalsMoppModifier: the cleanup function in hkpRemoveTerminalsMoppModifier's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpRemoveTerminalsMoppModifier.h"

void HK_CALL cleanupLoadedObjecthkpRemoveTerminalsMoppModifier(void *p)
{
    static_cast<hkpRemoveTerminalsMoppModifier *>(p)->~hkpRemoveTerminalsMoppModifier();
}
