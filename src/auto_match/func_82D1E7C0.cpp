// hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, hkUint32> scalar deleting destructor: the inline destructor (the
// out-of-line clear, then the node storage's out-of-line destructor), then Havok's non-virtual class allocator
// frees sizeof(hkAabbTree) bytes.
#include "havok/hkAabbTree.h"

typedef hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, unsigned int> Tree;

extern "C" Tree *fn_82D1E7C0(Tree *self, unsigned int flags)
{
    self->Tree::~hkAabbTree();
    if (flags & 1)
        hkMemoryRouter::getInstance().heap().blockFree(self, sizeof(Tree));
    return self;
}
