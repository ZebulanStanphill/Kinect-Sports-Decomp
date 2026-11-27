// hkpAabbTreeWorldManager::entityAddedCallback (slot 1 of ??_7hkpAabbTreeWorldManager@@6BhkpEntityListener@@@):
// sets +0x69, clears +0x68, then hands the entity's collidable (+0x10) to the manager's add function
// (fn_82DB1630, whose name is not known). Built over havok/hkpAabbTreeWorldManager.h; `this` is the
// hkpEntityListener subobject (+0x14).
#include "havok/hkpAabbTreeWorldManager.h"

extern "C" void fn_82DB1630(hkpAabbTreeWorldManager *manager, const void *collidable);

void hkpAabbTreeWorldManager::entityAddedCallback(hkpEntity *entity)
{
    m_flag69 = true;
    m_flag68 = false;
    fn_82DB1630(this, reinterpret_cast<const char *>(entity) + 0x10);
}
