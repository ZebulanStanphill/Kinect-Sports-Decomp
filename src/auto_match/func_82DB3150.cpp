// hkpKdTreeWorldManager::entityAddedCallback (slot 1 of ??_7hkpKdTreeWorldManager@@6BhkpEntityListener@@@): marks
// the kd-tree for a rebuild (+0x20).
// Built over havok/hkpKdTreeWorldManager.h; `this` is the hkpEntityListener / hkpPhantomListener subobject, so
// the members are reached at their offset minus 0x14 / 0x18.
#include "havok/hkpKdTreeWorldManager.h"

void hkpKdTreeWorldManager::entityAddedCallback(hkpEntity *entity)
{
    m_treeDirty = true;
}
