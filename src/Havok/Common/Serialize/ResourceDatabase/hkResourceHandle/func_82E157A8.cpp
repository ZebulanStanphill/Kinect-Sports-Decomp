// hkMemoryResourceContainer::hkMemoryResourceContainer(hkFinishLoadedObjectFlag), the finish constructor, out of
// line in hkMemoryResourceContainer.cpp: when finishing, each child gets this container as its parent. The
// finish function of the class's hkTypeInfo (82E08E38) and getVtable (82E08E60) call it.
#include "havok/hkMemoryResourceContainer.h"

hkMemoryResourceContainer::hkMemoryResourceContainer(hkFinishLoadedObjectFlag f)
    : hkResourceContainer(f), m_name(f), m_resourceHandles(f), m_children(f)
{
    if (f.m_finishing) {
        for (int i = 0; i < m_children.getSize(); i++)
            m_children[i]->m_parent = this;
    }
}
