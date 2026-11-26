// hkMemoryResourceContainer::createContainer(const char *name) (Common/Serialize/Resource/
// hkMemoryResourceContainer.cpp): returns the child container of that name, or makes one, pushes it onto
// m_children (an hkArray of hkRefPtr) and parents it to this container. It is reached only through the vtable
// (+0x28) and keeps its fn_ name; `this` is written as an explicit first parameter.
#include "havok/hkBase.h"
#include "havok/hkMemoryResourceContainer.h"

inline void *operator new(hk_size_t, void *p) throw() { return p; }

extern "C" hkMemoryResourceContainer *fn_82E15C30(hkMemoryResourceContainer *self, const char *name)
{
    hkMemoryResourceContainer *r = static_cast<hkMemoryResourceContainer *>(self->findContainerByName(name));
    if (!r) {
        r = new hkMemoryResourceContainer(name);
        self->m_children.pushBack(r);
        r->m_parent = self;
        r->removeReference();
    }
    return r;
}
