// hkSimpleLocalFrame::~hkSimpleLocalFrame (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.cpp): releases the children and the group.
#include "havok/hkBase.h"
#include "havok/hkSimpleLocalFrame.h"

hkSimpleLocalFrame::~hkSimpleLocalFrame()
{
    // Reading the children through a local copy of this puts the loop's lwzx base first, as in the original
    // (see func_82DF3D70.cpp).
    hkSimpleLocalFrame *self = this;
    int n = self->m_children.getSize();
    for (int i = 0; i < n; i++)
        self->m_children[i]->removeReference();
    if (m_group)
        m_group->removeReference();
}
