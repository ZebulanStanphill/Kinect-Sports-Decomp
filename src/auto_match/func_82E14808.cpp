// hkMemoryResourceContainer::findContainerByName(const char *name, const hkResourceContainer *prev) const
// (Common/Serialize/Resource/hkMemoryResourceContainer.cpp; slot +0x34 of ??_7hkMemoryResourceContainer@@6B@):
// the first child after prev (from the start when prev is null) whose name is name; any child when name is
// null.
#include "havok/hkMemoryResourceContainer.h"
#include "havok/hkString.h"

hkResourceContainer *hkMemoryResourceContainer::findContainerByName(const char *name,
                                                                    const hkResourceContainer *prev) const
{
    int i = 0;
    int j;
    int off = 0;
    hkMemoryResourceContainer *const *p;
    hkMemoryResourceContainer *e;
    do {
        if (prev == HK_NULL || i >= m_children.getSize())
            break;
        i++;
        p = (hkMemoryResourceContainer *const *)((const char *)m_children.m_data + off);
        off += 4;
    } while (*p != prev);
    j = i;
    if (j < m_children.getSize()) {
        off = j << 2;
        do {
            e = *(hkMemoryResourceContainer *const *)((const char *)m_children.m_data + off);
            if (name == HK_NULL)
                return e;
            if (hkString::strCmp(name, e->m_name.cString()) == 0)
                return e;
            j++;
            off += 4;
        } while (j < m_children.getSize());
    }
    return HK_NULL;
}
