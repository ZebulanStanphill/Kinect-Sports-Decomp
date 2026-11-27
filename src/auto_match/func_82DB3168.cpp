// hkpKdTreeWorldManager::phantomAddedCallback (slot 1 of ??_7hkpKdTreeWorldManager@@6BhkpPhantomListener@@@): marks
// the kd-tree for a rebuild (+0x20) unless the first word of the phantom's collidable (+0x10, its shape) is 0.
// The word is compared signed (cmpwi), so it is read as an int.
// Built over havok/hkpKdTreeWorldManager.h; `this` is the hkpEntityListener / hkpPhantomListener subobject, so
// the members are reached at their offset minus 0x14 / 0x18.
#include "havok/hkpKdTreeWorldManager.h"

void hkpKdTreeWorldManager::phantomAddedCallback(hkpPhantom *phantom)
{
    if (*reinterpret_cast<const int *>(reinterpret_cast<const char *>(phantom) + 0x10) == 0)
    {
        return;
    }
    m_treeDirty = true;
}
