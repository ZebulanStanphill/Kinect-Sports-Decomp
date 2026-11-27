// hkpAabbTreeWorldManager::inactiveEntityMovedCallback (slot 2 of
// ??_7hkpAabbTreeWorldManager@@6BhkpWorldPostSimulationListener@@@): while the manager is in use (+0x24), sets
// +0x69, clears +0x68 and hands the entity's collidable (+0x10) to the manager's update function (fn_82DB1098,
// whose name is not known). Built over havok/hkpAabbTreeWorldManager.h; `this` is the
// hkpWorldPostSimulationListener subobject (+0x20).
#include "havok/hkpAabbTreeWorldManager.h"

extern "C" void fn_82DB1098(hkpAabbTreeWorldManager *manager, const void *collidable);

void hkpAabbTreeWorldManager::inactiveEntityMovedCallback(hkpEntity *entity)
{
    if (m_inUse)
    {
        m_flag69 = true;
        m_flag68 = false;
        fn_82DB1098(this, reinterpret_cast<const char *>(entity) + 0x10);
    }
}
