// hkMemoryResourceContainer::hkMemoryResourceContainer(hkFinishLoadedObjectFlag).
#include "havok/hkBase.h"

class hkResourceBase : public hkReferencedObject {
public:
    hkResourceBase(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual int getType() const = 0;
};

class hkResourceContainer : public hkResourceBase {
public:
    hkResourceContainer(hkFinishLoadedObjectFlag flag) : hkResourceBase(flag) {}
};

template <typename T>
struct hkArrayF {
    hkArrayF(hkFinishLoadedObjectFlag) {}
    T &operator[](int i) { return m_data[i]; }
    int getSize() const { return m_size; }
    T *m_data;
    int m_size;
    int m_capacityAndFlags;
};

class hkMemoryResourceHandle;

class hkMemoryResourceContainer : public hkResourceContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    HK_FORCE_INLINE hkMemoryResourceContainer(hkFinishLoadedObjectFlag flag)
        : hkResourceContainer(flag), m_name(flag), m_resourceHandles(flag), m_children(flag)
    {
        if (flag.m_finishing) {
            for (int i = 0; i < m_children.getSize(); i++) {
                hkMemoryResourceContainer *c = m_children[i];
                c->m_parent = this;
            }
        }
    }
    virtual int getType() const;

    hkStringPtr m_name;                                   // +0x8
    hkMemoryResourceContainer *m_parent;                  // +0xC
    hkArrayF<hkMemoryResourceHandle *> m_resourceHandles; // +0x10
    hkArrayF<hkMemoryResourceContainer *> m_children;     // +0x1C
};

extern "C" hkMemoryResourceContainer *fn_82E157A8(hkMemoryResourceContainer *self, hkFinishLoadedObjectFlag flag)
{
    self->hkMemoryResourceContainer::hkMemoryResourceContainer(flag);
    return self;
}
