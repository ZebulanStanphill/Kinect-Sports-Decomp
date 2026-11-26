#include "havok/hkBase.h"
#include "havok/hkDefaultBuiltinTypeRegistry.h"
#include "havok/hkDefaultClassNameRegistry.h"
struct ResourcePointer { ResourcePointer() : p(0) {} hkReferencedObject *p; };
class hkResource : public hkReferencedObject {};
extern "C" hkBuiltinTypeRegistry *lbl_8323FD9C;   // hkSingleton<hkBuiltinTypeRegistry>::s_instance
class hkPackfileData : public hkResource {
public:
    hkPackfileData();
    void *m_a, *m_b;
    hkPointerMap<void *, void *> m_map;
    hkStringMap<void *> m_registry;
    ResourcePointer m_resource;
    int m_flag;
    hkArray<void *> m_arrays[4];
};
hkPackfileData::hkPackfileData()
    : m_a(0), m_b(0), m_registry(), m_resource(), m_flag(1)
{
    hkReferencedObject *r=lbl_8323FD9C->getClassNameRegistry();
    if (r) r->addReference();
    if (m_resource.p) m_resource.p->removeReference();
    m_resource.p=r;
}
