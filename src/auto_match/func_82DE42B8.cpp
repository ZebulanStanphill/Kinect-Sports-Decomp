// hkpDisplayBindingData::PhysicsSystem scalar deleting destructor: calls the out-of-line implicit ~PhysicsSystem (fn_82DE40E0), then frees through the class allocator.
// The function at the end only makes the compiler emit the vtable, and with it this function.
// hkpDisplayBindingData and its nested RigidBody and PhysicsSystem (Physics/Utilities/VisualDebugger/
// hkpDisplayBindingData.h); member layout from the destructors.
#include "havok/hkBase.h"

class __declspec(align(16)) hkMatrix4 {
public:
    hkReal m[16];
};

class hkpRigidBody;
class hkpPhysicsSystem;

class hkpDisplayBindingData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

    class RigidBody : public hkReferencedObject {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
        RigidBody(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_rigidBody(flag), m_displayObjectPtr(flag) {}

        hkRefPtr<hkReferencedObject> m_rigidBody;          // +0x8 (an hkpRigidBody)
        hkRefPtr<hkReferencedObject> m_displayObjectPtr;   // +0xC
        hkMatrix4 m_rigidBodyFromDisplayObjectTransform;   // +0x10
        hkMatrix4 m_displayObjectFromRigidBodyTransform;   // +0x50
    };

    class PhysicsSystem : public hkReferencedObject {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
        PhysicsSystem(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_bindings(flag), m_system(flag) {}

        hkArray<hkRefPtr<RigidBody> > m_bindings;   // +0x8
        hkRefPtr<hkReferencedObject> m_system;      // +0x14 (an hkpPhysicsSystem)
    };

    hkpDisplayBindingData(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_rigidBodyBindings(flag), m_physicsSystemBindings(flag) {}

    hkArray<hkRefPtr<RigidBody> > m_rigidBodyBindings;           // +0x8
    hkArray<hkRefPtr<PhysicsSystem> > m_physicsSystemBindings;   // +0x14
};

void emitVtable_82DE42B8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpDisplayBindingData::PhysicsSystem(f); }
