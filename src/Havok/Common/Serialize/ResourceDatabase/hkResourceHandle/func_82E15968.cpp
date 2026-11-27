// hkMemoryResourceContainer::createResource(const char *name, void *object, const hkClass *klass)
// (Common/Serialize/Resource/hkMemoryResourceContainer.cpp): a new hkMemoryResourceHandle (class allocator,
// out-of-line constructor ??0hkMemoryResourceHandle@@QAA@XZ), named and given the object, is pushed onto
// m_resourceHandles (an hkArray of hkRefPtr: a temporary hkRefPtr is built from the pointer, copied into
// the array and destroyed), then the creation reference is dropped. Slot +0x14 of
// ??_7hkMemoryResourceContainer@@6B@; it is reached only through the vtable.
#include "havok/hkMemoryResourceContainer.h"

inline void *operator new(hk_size_t, void *p) throw() { return p; }

hkResourceHandle *hkMemoryResourceContainer::createResource(const char *name, void *object, const hkClass *klass)
{
    hkMemoryResourceHandle *handle = new hkMemoryResourceHandle();
    handle->setName(name);
    handle->setObject(object, klass);
    m_resourceHandles.pushBack(handle);
    handle->removeReference();
    return handle;
}
