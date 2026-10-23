#include "havok/hkReferencedObject.h"
extern "C" {
void fn_82D34CA8(void *self);
void fn_82D1E718(void *self);
}

struct hkAabbTreeData {
    struct hkAabbTreeAabb {
        int v[8];
    };
};

struct hkAabbTreeMember {
    ~hkAabbTreeMember() { fn_82D1E718(this); }
    int v[25];
};

template <typename BOUNDING_VOLUME, typename IDXTYPE>
class hkAabbTree {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkAabbTree);
    virtual ~hkAabbTree() { fn_82D34CA8(this); }
    int m_pad[6];
    hkAabbTreeMember m_member;
};

typedef hkAabbTree<hkAabbTreeData::hkAabbTreeAabb, unsigned int> Tree;

extern "C" Tree *fn_82D1E7C0(Tree *self, unsigned int flags)
{
    self->Tree::~hkAabbTree();
    if (flags & 1)
        hkMemoryRouter::getInstance().heap().blockFree(self, sizeof(Tree));
    return self;
}
