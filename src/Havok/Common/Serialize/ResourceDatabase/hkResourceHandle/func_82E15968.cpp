// hkMemoryResourceContainer::createResource(const char *name, void *object, const hkClass *klass)
// (Common/Serialize/Resource/hkMemoryResourceContainer.cpp): a new hkMemoryResourceHandle (class allocator,
// out-of-line constructor ??0hkMemoryResourceHandle@@QAA@XZ), named and given the object, is pushed onto
// m_resourceHandles (an hkArray of hkRefPtr: a temporary hkRefPtr is built from the pointer, copied into
// the array and destroyed), then the creation reference is dropped. It is reached only through the
// vtable and keeps its fn_ name; `this` is written as an explicit first parameter.
#include "havok/hkMemoryResourceContainer.h"

inline void *operator new(hk_size_t, void *p) throw() { return p; }

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
