// hkpKdTreeWorldManager::phantomRemovedCallback (slot 2 of ??_7hkpKdTreeWorldManager@@6BhkpPhantomListener@@@):
// does nothing when the first word of the phantom's collidable (+0x10, its shape; compared signed, so read as an
// int) is 0; otherwise removes the collidable from the
// kd-tree at once (fn_83083900) when +0x21 is set, else marks the tree for a rebuild.
// Built over havok/hkpKdTreeWorldManager.h; `this` is the hkpEntityListener / hkpPhantomListener subobject, so
// the members are reached at their offset minus 0x14 / 0x18.
#include "havok/hkpKdTreeWorldManager.h"

extern "C" void fn_83083900(void *tree, const void *collidable);   // the kd-tree's removal of one collidable

void hkpKdTreeWorldManager::phantomRemovedCallback(hkpPhantom *phantom)
{
    const int *collidable = reinterpret_cast<const int *>(reinterpret_cast<const char *>(phantom) + 0x10);
    if (*collidable == 0)
    {
        return;
    }
    if (!m_removeImmediately)
    {
        m_treeDirty = true;
        return;
    }
    fn_83083900(m_kdTree, collidable);
}
