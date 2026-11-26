// getVtablehkpPhysicsSystem, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPhysicsSystem (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
// hkpPhysicsSystem (Physics/Dynamics/World/hkpPhysicsSystem.h): four hkArrays, then m_name (+0x38, finished out
// of line: fn_82CED308), m_userData, m_active.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

const void *HK_CALL getVtablehkpPhysicsSystem()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpPhysicsSystem)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPhysicsSystem(f);
    return u.ptr;
}
