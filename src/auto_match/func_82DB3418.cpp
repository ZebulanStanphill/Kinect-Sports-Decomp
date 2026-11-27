// hkpKdTreeWorldManager::~hkpKdTreeWorldManager (Physics/Collide/BroadPhase/... hkpKdTreeWorldManager.cpp):
// removes itself from the world as entity and phantom listener, deletes the kd-tree, then the bases'
// destructors store the listener vtables and hkBaseObject's. It stores the class's three vtables, so it is the
// class's own destructor; its deleting destructor (fn_82DB3F20) calls it out of line.
// The class is havok/hkpKdTreeWorldManager.h. (Merged with the world set's hkpWorld listener renames.)
#include "havok/hkBase.h"
#include "havok/hkpKdTreeWorldManager.h"
#include "havok/hkpWorld.h"

// hkKdTree (0x50 bytes, non-virtual class allocator); its destructor stays out of line (fn_83083AA0).
class hkKdTree;
extern "C" void fn_83083AA0(hkKdTree *self);
class hkKdTree {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTree);
    HK_FORCE_INLINE ~hkKdTree() { fn_83083AA0(this); }
    char m_data[0x50];
};

hkpKdTreeWorldManager::~hkpKdTreeWorldManager()
{
    m_world->removeEntityListener(this);
    m_world->removePhantomListener(this);
    hkKdTree *tree = static_cast<hkKdTree *>(m_kdTree);
    if (tree)
    {
        delete tree;
    }
}
