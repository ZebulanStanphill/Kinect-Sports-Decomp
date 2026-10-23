#include "havok/hkBase.h"
extern "C" void fn_82D00388(void *, hkContainerHeapAllocator);
class StringRegistry {
public:
    StringRegistry() { fn_82D00388(this,hkContainerHeapAllocator()); }
    int storage[4];
};
struct ResourcePointer { ResourcePointer() : p(0) {} hkReferencedObject *p; };
class hkResource : public hkReferencedObject {};
class hkBuiltinTypeRegistry : public hkReferencedObject {
public:
    virtual void dummy();
    virtual hkReferencedObject *getRegistry();
};
extern "C" hkBuiltinTypeRegistry *lbl_8323FD9C;
class hkPackfileData : public hkResource {
public:
    hkPackfileData();
    void *m_a, *m_b;
    hkPointerMap<void *, void *> m_map;
    StringRegistry m_registry;
    ResourcePointer m_resource;
    int m_flag;
    hkArray<void *> m_arrays[4];
};
hkPackfileData::hkPackfileData()
    : m_a(0), m_b(0), m_registry(), m_resource(), m_flag(1)
{
    hkReferencedObject *r=lbl_8323FD9C->getRegistry();
    if (r) r->addReference();
    if (m_resource.p) m_resource.p->removeReference();
    m_resource.p=r;
}
