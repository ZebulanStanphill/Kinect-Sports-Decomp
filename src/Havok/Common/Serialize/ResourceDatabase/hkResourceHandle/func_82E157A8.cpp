// hkMemoryResourceContainer::hkMemoryResourceContainer(hkFinishLoadedObjectFlag). When finishing, each child
// gets this container as its parent. In Havok that loop is the constructor's body; the header's inline finish
// constructor has an empty body, so the loop follows the explicit constructor call here.
#include "havok/hkMemoryResourceContainer.h"

extern "C" hkMemoryResourceContainer *fn_82E157A8(hkMemoryResourceContainer *self, hkFinishLoadedObjectFlag flag)
{
    self->hkMemoryResourceContainer::hkMemoryResourceContainer(flag);
    if (flag.m_finishing) {
        for (int i = 0; i < self->m_children.getSize(); i++) {
            hkMemoryResourceContainer *c = self->m_children[i];
            c->m_parent = self;
        }
    }
    return self;
}
