// getVtablehkpRigidBody, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpRigidBody (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer. hkpRigidBody's finish constructor is
// inline: hkpEntity's finish constructor (out of line), then the hkpRigidBody vtable.
#include "havok/hkpRigidBody.h"

const void *HK_CALL getVtablehkpRigidBody()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpRigidBody)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpRigidBody(f);
    return u.ptr;
}
