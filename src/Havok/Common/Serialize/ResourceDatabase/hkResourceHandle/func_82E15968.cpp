// hkMemoryResourceContainer::createResource(const char *name, void *object, const hkClass *klass)
// (Common/Serialize/Resource/hkMemoryResourceContainer.cpp): a new hkMemoryResourceHandle (class allocator,
// out-of-line constructor ??0hkMemoryResourceHandle@@QAA@XZ), named and given the object, is pushed onto
// m_resourceHandles (an hkArray of hkRefPtr: a temporary hkRefPtr is built from the pointer, copied into
// the array and destroyed), then the creation reference is dropped. It is reached only through the
// vtable and keeps its fn_ name; `this` is written as an explicit first parameter.
#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int sizeElem);   // hkArrayUtil::_reserveMore

inline void *operator new(hk_size_t, void *p) throw() { return p; }

template <typename T, typename Allocator = hkContainerHeapAllocator>
class hkArrayPB : public hkArray<T, Allocator> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        ::new ((void *)(this->m_data + this->m_size)) T(e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            fn_82CE63B0(&alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e) { _pushBack(Allocator::get(this), e); }
};

template <typename TYPE>
class hkRefPtrC : public hkRefPtr<TYPE> {
public:
    HK_FORCE_INLINE hkRefPtrC(TYPE *e) : hkRefPtr<TYPE>(e) {}
    HK_FORCE_INLINE hkRefPtrC(const hkRefPtrC &rp) : hkRefPtr<TYPE>(rp.m_pntr) {}
};

class hkResourceBase : public hkReferencedObject {
public:
    virtual const char *getName() const;    // +0xc
    virtual int getType() const;            // +0x10
};

class hkResourceHandle : public hkResourceBase {
public:
    virtual void setName(const char *name);                         // +0x14
    virtual void *getObject() const;                                // +0x18
    virtual const hkClass *getObjectClass() const;                  // +0x1c
    virtual void setObject(void *object, const hkClass *klass);     // +0x20
};

class hkMemoryResourceHandle : public hkResourceHandle {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryResourceHandle();

    hkUint8 m_data[0x1c - 0x8];
};

class hkResourceContainer : public hkResourceBase {
};

class hkMemoryResourceContainer : public hkResourceContainer {
public:
    hkStringPtr m_name;                                                 // +0x8
    hkMemoryResourceContainer *m_parent;                                // +0xc
    hkArrayPB<hkRefPtrC<hkMemoryResourceHandle> > m_resourceHandles;    // +0x10
    hkArrayPB<hkRefPtrC<hkMemoryResourceContainer> > m_children;        // +0x1c
};

extern "C" hkResourceHandle *fn_82E15968(hkMemoryResourceContainer *self, const char *name, void *object,
                                         const hkClass *klass)
{
    hkMemoryResourceHandle *handle = new hkMemoryResourceHandle();
    handle->setName(name);
    handle->setObject(object, klass);
    self->m_resourceHandles.pushBack(handle);
    handle->removeReference();
    return handle;
}
