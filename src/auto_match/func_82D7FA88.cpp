// getVtablehkpRigidBody, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpRigidBody (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpRigidBody -> hkpEntity -> hkpWorldObject -> hkReferencedObject -> hkBaseObject.
// hkpRigidBody's finish constructor is inline: hkpEntity's finish constructor (out of line, fn_82D8ABB0,
// which keeps its fn_ name because the Matching getVtablehkpEntity, func_82D7ED78, calls it), then the
// hkpRigidBody vtable. hkpEntity is modelled as that call followed by an opaque body of the same size.
#include "havok/hkBase.h"

extern "C" void fn_82D8ABB0(void *self, hkFinishLoadedObjectFlag flag);   // hkpEntity::hkpEntity(hkFinishLoadedObjectFlag)

class hkpRigidBody : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpRigidBody(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}

    char m_entity[0x220 - 8];   // hkpWorldObject and hkpEntity members (sizeof(hkpEntity) = 0x220)
};

const void *HK_CALL getVtablehkpRigidBody()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpRigidBody)];
    } u;
    hkFinishLoadedObjectFlag f;
    fn_82D8ABB0(u.buf, f);
    new (u.buf) hkpRigidBody(f);
    return u.ptr;
}
