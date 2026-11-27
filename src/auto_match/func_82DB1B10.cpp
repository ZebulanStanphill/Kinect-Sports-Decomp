// hkpAabbTreeWorldManager::phantomAddedCallback (slot 1 of ??_7hkpAabbTreeWorldManager@@6BhkpPhantomListener@@@):
// sets +0x69, clears +0x68, then hands the phantom's collidable (+0x10) to the manager's add function
// (fn_82DB1630, whose name is not known). Built over havok/hkpAabbTreeWorldManager.h; `this` is the
// hkpPhantomListener subobject (+0x18).
#include "havok/hkpAabbTreeWorldManager.h"

extern "C" void fn_82DB1630(hkpAabbTreeWorldManager *manager, const void *collidable);

void hkpAabbTreeWorldManager::phantomAddedCallback(hkpPhantom *phantom)
{
    m_flag69 = true;
    m_flag68 = false;
    fn_82DB1630(this, reinterpret_cast<const char *>(phantom) + 0x10);
}
