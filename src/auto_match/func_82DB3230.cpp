// hkpKdTreeWorldManager::entityRemovedCallback (slot 2 of ??_7hkpKdTreeWorldManager@@6BhkpEntityListener@@@):
// removes the entity's collidable (+0x10) from the kd-tree at once (fn_83083900) when +0x21 is set, else marks the
// tree for a rebuild.
// Built over havok/hkpKdTreeWorldManager.h; `this` is the hkpEntityListener / hkpPhantomListener subobject, so
// the members are reached at their offset minus 0x14 / 0x18.
#include "havok/hkpKdTreeWorldManager.h"

extern "C" void fn_83083900(void *tree, const void *collidable);   // the kd-tree's removal of one collidable

void hkpKdTreeWorldManager::entityRemovedCallback(hkpEntity *entity)
{
    if (!m_removeImmediately)
    {
        m_treeDirty = true;
        return;
    }
    fn_83083900(m_kdTree, reinterpret_cast<const char *>(entity) + 0x10);
}
