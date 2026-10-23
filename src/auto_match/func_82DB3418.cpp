// hkpKdTreeWorldManager::~hkpKdTreeWorldManager (Physics/Collide/BroadPhase/... hkpKdTreeWorldManager.cpp):
// removes itself from the world as entity and phantom listener, deletes the kd-tree, then the bases'
// destructors store the listener vtables and hkBaseObject's. It keeps its fn_ name because the
// deleting destructor fn_82DB3F20 can match as C: the destructor is written inline and called here.
#include "havok/hkBase.h"

class hkpWorld;
class hkpEntity;
class hkpPhantom;
class hkpEntityListener;
class hkpPhantomListener;

extern "C" {
void fn_82D81408(hkpWorld *world, hkpEntityListener *listener);    // hkpWorld::removeEntityListener
void fn_82D81450(hkpWorld *world, hkpPhantomListener *listener);   // hkpWorld::removePhantomListener
}

// hkKdTree (0x50 bytes, non-virtual class allocator); its destructor stays out of line (fn_83083AA0).
class hkKdTree;
extern "C" void fn_83083AA0(hkKdTree *self);
class hkKdTree {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTree);
    HK_FORCE_INLINE ~hkKdTree() { fn_83083AA0(this); }
    char m_data[0x50];
};

class hkpTreeWorldManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual ~hkpTreeWorldManager() {}
    virtual void updateFromWorld();
    virtual void setUpTree();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();

    void *m_unk08;      // +0x08
    void *m_unk0C;      // +0x0C
    hkKdTree *m_tree;   // +0x10
};

class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
    virtual void entityAddedCallback(hkpEntity *entity) {}
    virtual void entityRemovedCallback(hkpEntity *entity) {}
    virtual void entityShapeSetCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity) {}
    virtual void entityDeletedCallback(hkpEntity *entity) {}
};

class hkpPhantomListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpPhantomListener() {}
    virtual void phantomAddedCallback(hkpPhantom *phantom) {}
    virtual void phantomRemovedCallback(hkpPhantom *phantom) {}
    virtual void phantomShapeSetCallback(hkpPhantom *phantom) {}
    virtual void phantomDeletedCallback(hkpPhantom *phantom) {}
};

// RTTI: hkpTreeWorldManager at +0x0, hkpEntityListener at +0x14, hkpPhantomListener at +0x18.
class hkpKdTreeWorldManager : public hkpTreeWorldManager, public hkpEntityListener, public hkpPhantomListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    virtual HK_FORCE_INLINE ~hkpKdTreeWorldManager()
    {
        fn_82D81408(m_world, this);
        fn_82D81450(m_world, this);
        if (m_tree)
        {
            delete m_tree;
        }
    }

    hkpWorld *m_world;   // +0x1C
};

extern "C" void fn_82DB3418(hkpKdTreeWorldManager *self)
{
    self->hkpKdTreeWorldManager::~hkpKdTreeWorldManager();
}
