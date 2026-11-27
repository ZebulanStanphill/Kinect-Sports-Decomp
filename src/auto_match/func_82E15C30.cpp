// hkMemoryResourceContainer::createContainer(const char *name) (Common/Serialize/Resource/
// hkMemoryResourceContainer.cpp): returns the child container of that name, or makes one, pushes it onto
// m_children (an hkArray of hkRefPtr) and parents it to this container. It is reached only through the vtable
// (+0x28).
#include "havok/hkBase.h"
#include "havok/hkMemoryResourceContainer.h"

inline void *operator new(hk_size_t, void *p) throw() { return p; }

hkResourceContainer *hkMemoryResourceContainer::createContainer(const char *name)
{
    hkMemoryResourceContainer *r = static_cast<hkMemoryResourceContainer *>(findContainerByName(name));
    if (!r) {
        r = new hkMemoryResourceContainer(name);
        m_children.pushBack(r);
        r->m_parent = this;
        r->removeReference();
    }
    return r;
}
